#include<stdio.h>
int main()
{
    /*double a_123=200;
    int b=10;
    printf("This Is Just for Testing Purpose\n");
   // scanf("%d %d",&a,&b);
    printf("%d-is size of double data type", sizeof(a_123));
    printf("\n%d- is size of int data type", sizeof(b));
    float z=12.12;
    printf("\n%.3f",z);
    printf("\n%d- is size of float data type", sizeof(z));
    char h='Koti';
    printf("\n%c",h);
    printf("\n%d- is size of char data type", sizeof(h));
    char Hema[]="This Is hemakoti Bonthada And This Is Just For Testing Purpose ";
     printf("\n%s",Hema);
     printf("\n%d- is size of String data type", sizeof(Hema));
     float A,B=2,C=1;
     A=B*C/4*5+(10+2);
     printf("\n%.1f",A);
     //Conditional Statments 
     int Age;
     printf("Enter Your Age: ");
     scanf("%d",&Age);
     if(Age>=100)
    
        printf("Your Age is %d and Nuvvu Inka Brathike Unnava\n", Age);
    
    else if(Age>=50) 
    
        printf("%d is Your age & You Are Musolidivi\n",Age);
    
     else if (Age>=30)
    
        printf("%d is Your age & You Are On Uncle Age\n",Age);
    
     else if (Age>=18)
   
    printf("Your Age Is %d and You are a Young Age\n", Age);
   
    else if(Age>=15)
    
    printf("Your age Is %d and You are a Teenager\n", Age);

    else if(Age>=5)
    
    printf("Your age Is %d and You are a Kid\n", Age);  
    
    else
    printf("Your Age is %d and Nuvvu Inka a Babie?\n",Age);

    printf("This Is Next To If Block \n");


    // Loops
    int i=5,Password;
    printf("Enter Your Password: ");
    while(i!=0)
    {
        scanf("%d", &Password);
        if(Password==1122)
        {
            printf("You Are Entered a Correct Password\n");
        break;
        }
        else
        {
            printf("You Entred a Wrong Password and Please Try Again\n");
        i--;
        continue;
        }


    }

int i=0;
while(i<5)
    {
        printf("Lohitha\n");
    i++;
    }*/
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}