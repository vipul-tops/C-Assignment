// Make simple calculator
#include<stdio.h>
int main()
{
	int a,b,ans;
	
	printf("Addition \n");
	printf(" Enter two value : ");
	scanf("%d %d",&a,&b);
	
	ans=a+b;
	printf("\n Addition :%d",ans);
	printf("\n\nSubstarction");
	printf("\n Enter two Num : ");
	scanf("%D %D",&a,&b);
	ans=a-b;
	printf("\n Substraction :%d",ans);
	printf("\n\nMultiplication");
	printf("\n Enter Two value : ");
	scanf("%d %d",&a,&b);
	ans=a*b;
	printf("\n Multiplication :%d",ans);
	printf("\n\nDivision");
	printf("\n Enter any Two Number : ");
	scanf("%d %d",&a,&b);
	ans=a/b;
	printf("\n Divided :%d",ans);
	printf("\n\nModulo");
	printf("\n Enter any Two number : ");
	scanf("%d %d",&a,&b);
	ans=a%b;
	printf("\n Modulo :%d",ans);
	
	return 0;
}
