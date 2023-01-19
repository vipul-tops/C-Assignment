#include<stdio.h>
#include<conio.h>

char* reverse(char* str);

int main()
{
    int i;
    char str[20];
    char *rev;
    
    printf("Enter the string : ");
    scanf("%s", str);
    
    rev = reverse(str);
    printf("\nThe reversed string is : %s\n", rev);
    getch();
}
char* reverse(char *str)
{
    static int i = 0;
    static char rev[20];
    if(*str)
    {
        reverse(str+1);
        rev[i++] = *str;
    }
    return rev;
}
