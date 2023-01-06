//Wap on simple interest
#include<stdio.h>
int main()
{
	float p,r,y,interest;
	
	printf("Enter a Principle Value : ");
	scanf("%f",&p);
	
	printf("Enter a Rate of Interest : ");
	scanf("%f",&r);
	
	printf("Enter Number of Year : ");
	scanf("%f",&y);
	
	interest= (p*r*y)/100;
	
	printf(" Interest : %.2f",interest);
	
	return 0;
}
