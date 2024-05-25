#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers below %d are:\n", n);
    
    int i = 2;
    while (i < n) {
        if (isPrime(i)) printf("%d ", i);
        i++;
    }
    
    printf("\n");
    
    return 0;
}
