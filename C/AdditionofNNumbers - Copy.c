#include<stdio.h>
int main()
{
    int i=0,Sum=0;
    while(i<=100)
    {
        Sum+=i;
    i++;
    }
    printf("Sum Of First 100 Numbers Are: %d", Sum);
}