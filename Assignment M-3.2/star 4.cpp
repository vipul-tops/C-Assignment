//star pattern
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*",i);
		}
		printf("\n");
	}

	
}
