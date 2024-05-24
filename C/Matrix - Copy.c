#include<stdio.h>
void main()
{   int a,b,c,d,e,f,g,h;
    printf("Enter Rows And Columns of 1st Matrix");
    scanf("%d %d", &a,&b);
    printf("Enter Rows And Columns of 2nd Matrix");
    scanf("%d %d", &c,&d);
    int i,j,A[a][b],B[c][d],C[a][d];
    printf("Enter Elements In 1St Matrices:\n");
    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter Elements of 1st Matrix %dth Row %dth Column  Element: ", i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Elements In 2nd Matrices:\n");
    for (i=0;i<c;i++)
    {  
        for(j=0;j<d;j++)
        {
            printf("Enter Elements of 2nd Matrix %dth Row %dth Column  Element: ", i,j);
        scanf("%d",&B[i][j]);
        }
    }
    printf("Your Entered Matrices:\n");
        for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if (i==0)
        {
            printf("|");
        } 
        printf("%d\t",A[i][j]);
        }
          if (i==(a-1) || j==(b-1))
        {
            printf("|");
        }
        printf("\n");
    }
    //printf("Your Entered Matrices:\n");
        for (i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            if (i==0 ||  j==0 )
        {
            printf("|");
        }
        printf("%d\t",B[i][j]);
        }
         if (i==(c-1) || j==(d-1))
        printf("\n");
    }
    printf("Addition Of A & B Matrices Are:\n");
   // printf("Your Entered Matrices:\n");
        for (i=0;i<a;i++)
    {
        for(j=0;j<d;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    }
