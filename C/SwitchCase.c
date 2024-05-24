#include<stdio.h>
int Hemakoti =3;
int foo();
int too();
int zoo();
int main ()
{	
	int A,B=0,i;
	printf("Enter a The Number: ");
	scanf("%d", &A);
    switch(A){
        case 1:
        printf("A\n");
        break;
        case 2:
        printf("B\n");
        break;
        case 3:
        printf("C\n");
        break;
        default: 
        printf("Hello World");
        break; 
    }
    foo();
     zoo();
     too();

}
int foo(){
   extern  int Hemakoti;
   printf("%d",Hemakoti);

}
int zoo(){
   extern  int Hemakoti;
   printf("%d",Hemakoti);

}
int too(){
   extern  int Hemakoti;
   printf("%d",Hemakoti);

}