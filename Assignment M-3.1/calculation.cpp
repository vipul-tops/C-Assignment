// WAP to make simple calculator

#include<stdio.h>

int main()
{
	int a,b,ans=0;
	float ans1=0;
	
	printf("Enter two number : ");
	scanf("%d %d",&a,&b);
	
	ans=a+b;
	printf("\n addition= %d",ans);
	ans=a-b;
	printf("\n\n substraction= %d",ans);
	ans=a*b;
	printf("\n\n multiplication= %d",ans);
	ans1=a/b;
	printf("\n\n division= %.1f",ans1);
	ans=a%b;
	printf("\n\n modulo= %d",ans);
	
	return 0;
}
