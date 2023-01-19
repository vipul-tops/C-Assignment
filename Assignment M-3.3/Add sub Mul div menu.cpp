#include<stdio.h>

int main()
{
    int a,b,num;
    
    printf("**************** Menu *************\n");
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    
    printf("\nEnter Number between 1 to 4 : ");
    scanf("%d",&num);
    
    printf("\nEnter the values of a & b: ");
    scanf("%d %d",&a,&b);
    
    switch(num)
    {
    case 1	:
        printf("Addition  %d + %d  : %d",a,b,a+b);
        break;
    case 2	:
        printf("Substraction  %d - %d  : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication  %d * %d  : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division %d / %d : %d",a,b,a/b);
        break;
    default	:
        printf("Invalid Input !!!");
        break;
    }
    return 0;
}
