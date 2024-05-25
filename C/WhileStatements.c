#include<stdio.h>
int main(){
    // int pass=1122,i=0,k;
    // while(i<5){
    //     printf("Please Enter Your Password: ");
    //     scanf("%d",&k);
    //     if (k==pass){
    //         printf("You Have Entered Your Correct Password\n Welcome Back...\n");
    //         break;
    //     }
    //     else{
    //         printf("You've Entered Wrong Password and Try Again\n");
    //         if(i==4){
    //         printf("You've Entered Maximum Number Times, Please Try Again After Some Time...!\n");
    //     }
    //         i++;
    //     }
        
    // }
    // int i=1;
    // do{
    //     printf("Hey Dude\n");
    //     i++;
    // }while(i==0);
    for (int i=0;i<=5;i++){
        for (int j=0;j<=i;j++){
        printf("%d ",j);
        }
        printf("\n%d\n",i);
    }
}