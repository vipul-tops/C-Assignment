// find area of Rectangle

#include<stdio.h>

int main()
{
	int base,height,area=0;
	
	printf("Enter value of base and height : ");
	scanf("%d %d",&base,&height);
	
	area=(base*height);
	
	printf("\n Area of Rectangle = %d",area);
	
	return 0;
}
