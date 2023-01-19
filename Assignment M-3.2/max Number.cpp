// find the Maximum Value

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter any Three Value : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d MAximum Number",a);
		}
		else
		{
			printf("%d Maximum Number",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d Maximum Number",b);
		}
		else{
			printf("%d Maximum Number",c);
		}
	}
	return 0;
}
