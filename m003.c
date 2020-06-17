/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{
	
/*--------------------------------------------------------------------------/*
| This function takes the input, a, divides it by every nunber from 1 to a, |
| and checks if a is divisible by any other number other than 1 and itself. |
/*--------------------------------------------------------------------------*/
	
	int i, sum, remainder;
	
	sum = 0;
	i   = 1;
	
	while (i <= a)
	{
		remainder = (a % i);
		
		if (remainder == 0)   /* If "a" is divisible by  a number between 1 and a ( the remainder of the division is 0), */
		++sum;                /* the value of the variable "sum" is increased by 1.                                      */
		
		else
		;
		
		++i;
	}
	
	if (sum == 2)   /* If "a" is divisble by 2 numbers between 1 and "a" ("sum" is equal to 2), "a" is prime. */
	return 1;
	
	else            /* Otherwise, if "a" is divible by more than 2 numbers between 1 and a, "a" is not prime. */
	return 0;
}

int main ()
{
	int n;
	n = 101;
	
	printf ("%d\n", is_prime(n));
	
	return 0;
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
