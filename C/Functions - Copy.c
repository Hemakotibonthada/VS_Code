#include<stdio.h>
int Addition();
void printing();
int main()
{
    int a,b,c;
    printf("Enter a Value: ");
    scanf("%d %d", &a,&b);
    c=Addition(a,b);
    printf("%d\n", c);
    printf("this Is Just For Testing of the code\n");
    int d=Addition(a,b);
    printf("%d\n", d);
    printing(a);

}
int Addition(int a, int b){
    printf("This Is addition Function: \n");
    return a+b;
}
void printing(int a){
    for (int i=0;i<=a;i++){
        for (int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}