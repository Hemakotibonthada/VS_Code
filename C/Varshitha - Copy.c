#include<stdio.h>
void main()
{
    int i=0,j;
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}