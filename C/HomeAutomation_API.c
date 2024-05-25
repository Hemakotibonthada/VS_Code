#include <stdio.h>
#include <curl/curl.h>
#include <cjson/cJSON.h>

// Function to perform HTTP POST and return the response
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    ((char*)userp)[size * nmemb] = '\0';
    strcat((char*)userp, (char*)contents);
    return size * nmemb;
}

char* get_access_token(const char *client_id, const char *client_secret) {
    CURL *curl;
    CURLcode res;
    char data[1024], readBuffer[1024];

    sprintf(data, "grant_type=client_credentials&client_id=%s&client_secret=%s&audience=https://api2.arduino.cc/iot", client_id, client_secret);

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api2.arduino.cc/iot/v1/clients/token");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, readBuffer);

        res = curl_easy_perform(curl);
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        } else {
            // Parse JSON response
            cJSON *json = cJSON_Parse(readBuffer);
            char *access_token = cJSON_GetObjectItem(json, "access_token")->valuestring;
            printf("Access Token: %s\n", access_token);
            cJSON_Delete(json);
            return strdup(access_token); // Remember to free this in the calling function
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return NULL;
}

int main() {
    char *token = get_access_token("VxOyk2wQ9L0SVPijTZi2WEh6MA4FAbVo", "PznqJ4ZwlKQ5pBBkqPM00a1k!G3XXjElYP1RbGtZz4NKVwJgmXK@bK!2bZBDdxai");
    if (token) {
        printf("Token: %s\n", token);
        free(token);
    }
    return 0;
}
