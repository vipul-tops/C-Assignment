// Wap of string is palindrom or not

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],str1[100];
	
	printf("Enter any String : ");
	gets(str);
	strcpy(str1,str);
	strrev(str1);
	
	printf("\nReverse String : %s",str1);
	
	if(strcmp(str1,str)==0)
	{
		printf("\nstring is palindrom");
	}
	else
	{
		printf("\n string is not palindrom");
	}
	return 0;
}
