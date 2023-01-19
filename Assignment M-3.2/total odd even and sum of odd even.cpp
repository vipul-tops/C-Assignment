//WAP to take 10 no. Input from user and find total even and odd, and sum of odd/ even
#include <stdio.h>

int main()
{   
    int i,num,even_sum=0,odd_sum=0,even=0,odd=0;
    
    printf("Enter the 10 Numbers\n");
    for(i=1; i<=10;i++)
    {
        printf("Number = ");
        scanf("%d", &num);   
  		if (num%2 == 0) 
  		{
  			even++;
        	even_sum = even_sum + num;
  		}
  		else
  		{
  			odd++;
  			odd_sum = odd_sum + num;
		}
  	}
  	printf("\n Total Even Number : %d",even);
  	printf("\n Total Odd Number : %d",odd);
  
  	printf("\n Sum of Even Numbers = %d",even_sum);
  	printf("\n Sum of Odd Numbers = %d", odd_sum);

  	return 0;
}
