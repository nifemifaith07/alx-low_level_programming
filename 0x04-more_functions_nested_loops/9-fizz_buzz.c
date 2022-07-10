#include <stdio.h>

/*
 * main - Entry  point
 *
 * Return: Nothing 
 */

int main(void)
{
	 int m;

	 for (m = 0; m < 100; m++)
	 {
		 if ((m % 3) == 0 && (m % 5) == 0)
		 {
			 printf("FizzBuzz ");
		 }
		 if(m % 3 == 0)
		 {
			 printf("Fizz ");
		 }
		 if (m % 5 == 0)
		 {
			 printf("Buzz ");
		 }
	 }
	 printf("Buzz");
	 printf("\n");
	 return (0);
}
