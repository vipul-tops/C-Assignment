
#include<stdio.h>
main()
{
	int n,sum=0,digit1,digit2;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	digit2=n%10;
	
	while(n>=10)
	{
		
		digit1= n/=10;
		sum=digit1+digit2;
	}
	printf("Sum : %d ",sum);
}
