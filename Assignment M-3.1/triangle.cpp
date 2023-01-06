// find area of triangle
#include<stdio.h>

int main()
{
	float base,height,area;
	
	printf("Enter value of base and height : ");
	scanf("%f %f",&base,&height);
	
	area=(base*height)/2;
	
	printf("\n Area of Triangle : %.2f",area);
	
	return 0;
}
