#include<stdio.h>
int main()
{
    int N,i,j,Numbers[N],Hema,Arjun[N];
    puts("Enter How Many Numbers You Wanna Enter: ");
     scanf("%d", &N);
    for(i=0;i<N;i++)
    {   puts("Enter Numbers: ");
        scanf("%d", &Numbers[i]);
    }
    for(i=0;i<N;i++)
    {   
        if(Numbers[i]<=Numbers[++i])
        
           Hema=Numbers[i];
        printf("%d", i);
      // --i;
    }
    printf("The Numbers Are in Hema Is: %d", Hema);
   // printf("\nThe Numbers Are in Hema Is: %d", Arjun);
    puts("\nProgrammed Finised.");
}