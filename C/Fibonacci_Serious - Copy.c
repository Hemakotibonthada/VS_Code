#include<stdio.h>
int main()
{  
    int i,Sravs[1000];
     for (i=1;i<=10;i++)
    { 
        i=(++i)+(--i);
        printf("%d\t", i);
    }

}