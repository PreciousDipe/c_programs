#include <stdio.h>

int main()
{
	int number, digit, count=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	digit=number;

	while(digit!=0)
	{
		digit=digit/10;
		count++;
	}
	printf("%d has %d digits\n", number, count);
	return (0);
}
