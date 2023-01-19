// nested switch case
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any Alphabet : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
			case 'a':
				case 'E':
					case 'e':
						case 'I':
							case 'i':
								case 'O':
									case 'o':
										case 'u':
											case 'U':
												printf("\n \t Vovel");
												break;
		default:
			printf("\n \t Consonant");
			break;										
	}
	return 0;
}
