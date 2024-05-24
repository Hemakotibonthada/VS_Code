#include<stdio.h>
int main(){

// int age1,age2,age3,age4;
// scanf("%d%d%d%d",&age1,&age2,&age3,&age4);
// printf("age1:- %d,age2:- %d,age3:- %d,age4:- %d", age1,age2,age3,age4); 

//printf("Hello...!");


int age[10], opt;

    for (int i=0;i<=9;i++){
        printf("Enter age of %d person: ",i+1);
        scanf("%d",&age[i]);
    }
    printf("\n");
    printf("Which Person Age Do You Want to know?\n");
    scanf("%d",&opt);
    int k=sizeof(age)/sizeof(age[0]);
    if (k>=opt){
    printf("age of %d th person is: %d",opt,age[opt-1]);
    }
    else{
        printf("You Entered Outof Range Value...");
    }
}