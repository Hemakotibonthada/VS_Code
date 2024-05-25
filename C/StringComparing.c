#include <stdio.h>
#include<string.h>
#define N 1000
int main()
{   
    int i;
    char A[N],B[N];
    scanf("%s", A[N]);
    scanf("%s", B[N]);
    for (i=0;i<="\0";i++)
    {
       if ( A[i]==B[i])
       printf("Yes");
       else 
       printf("No");
    }
}
