//

#include<stdio.h>

int fact(int num)
{
	if(num<=0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int a;
	
	printf("Enter Number to find Factorial : ");
	scanf("%d",&a);
	
	printf("Factorial of %d : %d",a,fact(a));
	
	return 0;
}
