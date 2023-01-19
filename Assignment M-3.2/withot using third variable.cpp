//WAP to two numbers without using third variable

#include<stdio.h>

int main()
{
   int x,y;
   printf("enter x and y values:");
   scanf("%d%d",&x,&y);
   
   x=x+y;  // x=10+20=30
   y=x-y;  //y=30-20=10
   x=x-y;  //x=30-10=20
   x=x-y;  //x=20-10=10
   
   printf("After swap x : %d and y : %d",x,y);
   return 0;
}

