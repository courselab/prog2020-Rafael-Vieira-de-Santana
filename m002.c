/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{	

/* ------------------------------------------------------------------------------------- /* 
| This function uses a similar process 3 times. Since the only difference betwen them    |
| is wich variable is first then secondly considered, for the sake of organisation, this |
| process is explainded only once.                                                       |
/*---------------------------------------------------------------------------------------*/

int A, B, C;

A = *a;     /* "A" is the value of the variable located in the position pointed by *a. */
B = *b;     /* "B" is the value of the variable located in the position pointed by *b. */
C = *c;     /* "C" is the value of the variable located in the position pointed by *c. */


	if (A <= B && A <= C)     /* If "A" is the lowest value of the three,       */
	{                  
		*a = A;               /* change the variable *a to A.                    */
		                         
		if (B <= C)           /* Furthermore, if "B" is the second lowest value, */
		{
			*b = B;           /* change the variable *b to B,                     */
			*c = C;           /* and the variable *c to C.                        */
		}
		
		else                  /* otherwise if "C" is the second lowest,          */
		{
			*b = C;           /* change the variable *b to C,                     */           
			*c = B;           /* and the variable *c to B.                        */
		}
	}
	
	else if (B <= A && B <= C)
	{
		*a = B;
		
		if (A <= C)
		{
			*b = A;
			*c = C;
		}
		
		else
		{
			*b = C;
			*c = B;
		}
	}
	
	else
	{
		*a = C;
		
		if (A <= B)
		{
			*b = A;
			*c = B;
		}
		
		else
		{
			*b = B;
			*c = C;
		}
	}	
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
