// reverse number using of while loop

#include<stdio.h>
main()
{
	int n,reverse=0,rem;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10; //123456
		reverse=reverse*10+rem; //0=0*10+5
		
		n/=10;
	}
	printf("Reverse Number : %d",reverse);
}
