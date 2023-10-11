#include <stdio.h>
/**
 * main - Entry point 
 * description: a programme that prints numbers from 0 to 9
 * return: always zero(0)
 */
int main(void)
{
	int number;
	for (number = 0; number <= 9; number++)
		putchar(number + '0');
		putchar('\n');
	return (0);	
}	
