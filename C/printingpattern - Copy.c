#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==5 || i==10)
        {
        continue;
        }
        printf("%d\t",i);
    }
    printf("\nLoop Got Finished");
}