#include<stdio.h>
int main()
{
    double Factorial=1;
    int i,number;
    printf("Enter a Number To Find Factorial: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("%d\t",i);
        Factorial*=i;
    }
    printf("\n%lf",Factorial);
}