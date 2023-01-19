//WAP to print factorial of given numbe

#include<stdio.h>
 
int main()
{
	int n,i,f=1;  
 
	printf("Enter a number : ");    
	scanf("%d",&n);  
 
	for(i=n;i>=1;i--)   
	{  
		f = f*i;  
	}
	printf ("%d! = %d",n,f);  
	return 0;
}
