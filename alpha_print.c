#include <stdio.h>
/**
 * Main - entry point of the programme
 *
 * Description:A programme that prints all alphabet in lower case
 * Return : 0 (success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);
}	
