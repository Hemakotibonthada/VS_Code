#include<stdio.h>
int main ()
{	
	float A,B=0,i;
	printf("Enter a The Number Which You Need To Find Sqare Root: ");
	scanf("%d", &A);
	for (i=0;(i*i)<=A;i+=0.1)
	{
		B=i;
	}

printf("The Value For Sqroot Is : %f", B);
}