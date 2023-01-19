// length of string

#include<stdio.h>

int main()
{
	char str[100];
	int i,len;

	printf("Enter String : ");
	gets(str);
	
	for(i=1;str[i]!='\0';i++)
	{
		len++;
	}
	printf("Length of string : %d ",len);
	
	return 0;
}
