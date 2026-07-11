#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Sum: %d\n",a+b);
    printf("Substraction:%d\n",a-b);
    printf("Mulication:%d\n",a*b);
    printf("Division:%d\n",a/b);
    printf("Reminder:%d\n",(int)a % (int)b);
    int c= a>b ;
    printf("%d",c);
    
    return 0;
}
