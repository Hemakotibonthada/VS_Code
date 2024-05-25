#include<stdio.h>
void main()
{   
    int Number,Temp,Remainder=0,Reverse=0;
    printf("Enter a Number: ");
    scanf("%d", &Number);
    Temp=Number;
    while(Number>0)
    {
        Remainder=Number%10;
        Reverse=Remainder+Reverse*10;
        Number=Number/10;
    }
    if (Temp==Reverse)
    {
        printf("%d Is Palindrome", Temp);
    }
    else{
        printf("%d Is Not Palindrome", Temp);
    }
}