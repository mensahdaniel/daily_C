#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the programme
 * Description: This programme assigns a random number to a variable n and 
 * prints if its positive or negative 
 *Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("the number %d",n);
	if (n<0)
		printf("it is positive");
	else if (n>0)
		printf("it is negative");
	else
		printf("is zero baby");
	return (0);
}	

