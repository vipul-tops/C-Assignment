// find a Area of Circle

#include<stdio.h>

int main()
{
	float radius,area;
	
	printf("Enter radius of circle : ");
	scanf("%f",&radius);
	
	area= 3.14*radius*radius;
	// value of PI considering 3.14
	printf("\n Area = %.2f",area);
	
	return 0;
}
