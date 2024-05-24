#include<stdio.h>
void main(){
    for (int i=0;i<=5;i++){
        for (int j=0;j<=5;j++){
            printf("inner loop Value is: %d\n",j);
        }
        printf("Outer loop Value is: %d\n",i);
    }
    printf("Loops Terminated");
}