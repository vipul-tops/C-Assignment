
#include<stdio.h>
int main()
{
	float year,day;
	
	printf(" Enter Number of year : ");
	scanf("%f",&year);
	// convert year into days
	day= (year*365)/1;
	printf("\n Result in Day : %.2f",day);
	
	printf("\n\n Enter Number of Days : ");
	scanf("%f",&day);
	// convert days into year
	year= (day*1)/365;
	printf("\n Result in Year : %.2f",year);
	
}


