#include <stdio.h>
#include<string.h>
#define N 50
int main()
{   
    int i,flag;
    char A[N],B[N];
    puts("Enter 1st String");
    gets(A);
    puts("Enter 2nd String");
    gets(B);
    for (i=0;i!="\0";i++)
    {
       if ( A[i]==B[i])
       flag=1;
       else 
       flag=0;
    }
    if (flag==1)
    printf("Yes");
    else
    puts("No");
}
