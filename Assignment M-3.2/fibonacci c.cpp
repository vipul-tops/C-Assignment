//WAP on Fibonacci series up to given number
#include<stdio.h>

int main()
{
	int i,n,t1=0,t2=1,t3;
	
	t3=t1+t2; //t3=1
	
	printf("Enter Number of Term : ");
	scanf("%d",&n);
	
	printf("Fibonacci Sries %d %d ",t1,t2); //t1=0 t2=1
	
	for(i=3;i<=n;i++)
	{
		printf("%d ",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	return 0;
}
