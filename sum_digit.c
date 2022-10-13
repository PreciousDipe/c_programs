#include <stdio.h>

int main()
{
	int number, digit, last, first, sum=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	digit=number;

	last=digit%10;
	while(digit>=10)
	{
		digit=digit/10;
	}
	first=digit;
	sum=first+last;
	printf("addition of %d first and last number is: %d\n", number, sum);
	return (0);
}
