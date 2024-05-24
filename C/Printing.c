#include<stdio.h>
int main()
{   
    int i,j,A[2][2],B[2][2],C[2][2];
    //printf("How Many Times You Wanna Print The Msg?");
    //scanf("%d",&A);
    printf("Enter Elements In 1St Matrices:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Elements In 2nd Matrices:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&B[i][j]);
        }
    }
    printf("Your Entered Matrices:\n");
        for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    //printf("Your Entered Matrices:\n");
        for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    printf("Addition Of A & B Matrices Are:\n");
   // printf("Your Entered Matrices:\n");
        for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    }