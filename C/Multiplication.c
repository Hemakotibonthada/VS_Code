#include<stdio.h>
void main(){
    int mul=0,n,j=1;
    printf("Enter How Many Tables Uh Want: ");
    scanf("%d",&n);
    do{
        for (int i=0;i<=10;i++){
            mul=j*i;
            printf("%d x %d = %d\n",j,i,mul);
        }
        j++;
        printf("\n");
    }
    while(j<=n);
    }