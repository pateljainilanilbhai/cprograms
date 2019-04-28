#include <stdio.h>
int main()
{
	int i,j;
	char input, alphabet = 'A';
	printf("Enter the uppercase you want to print in last row: ");
	scanf("%c",&input);
	for(i=1; i <= (input-'A'+1); ++i)
	{
		for(j=1; j<=i;++j)
		{
			printf("%c", alphabet);
			}
			++alphabet;
			printf("\n");
			}   getch();
			return 0;
			}