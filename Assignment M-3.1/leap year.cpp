//WAP to check the given year leap or not
#include<stdio.h>
int main()
{
	int year,ans;
	
	printf("Enter a Year : ");
	scanf("%d",&year);
	
	ans=year%4;
	if(ans<=0)
	{
		printf("\n It is counting Leap Year");		
	}
	else
	{
		printf("\n It is counting Simple year");
	}
	return 0;
}


