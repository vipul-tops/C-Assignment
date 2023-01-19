//ascending descending
#include<stdio.h>
main()
{
	int a[5],i,j,temp,n;
	
	printf("1. Ascending \n2. Descending");
	printf("\nEnter Your Choice : ");
	scanf("%d",&n);
	
	if(n==1)
	{
	
	printf("Enter any Array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}
	else
	{
			printf("Enter any Array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
}
