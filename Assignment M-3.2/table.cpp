//WAP to print table up to given numbers
#include<stdio.h>
int main()
{
	int i,j,num;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d \n",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
