/* m001.c - Greatest of two.

   This program takes three integers read as command 
   line arguments and outputs the greatest among them.

   E.g.

      command line    : m001 5 20 7
      expected output : 20

   Directions:

      Please, edit function greatest();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m001 <num1> <num2> <num3>\n"

/* Return the greatest among a, b and c. */

int greatest (int a, int b, int c)
{
	printf  ("enter 3 values: ");
	scanf   ("%d %d %d", &a, &b, &c);
	
	if      (a >= b && a >= c){     /* If the first variable is greater or equal to the other two,                                                         */
	;}             /* return it.                                                                                                          */
  
    else if (b >= a &&  b >= c) {   /* If the condidion above isn't met, test if the second variable is greater or equal to the other two.                 */
    a = b;   }          /* if it is, return it.                                                                                                */
  
    else       {                    /* if neither of the condidions is met, the only possibility is that the third variable is greather than the other two.*/
    a = c;  }           /* so, if that is true, return the final variable.                                                                     */
    
    return a;
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;
  int g;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }
  
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  g = greatest (a, b, c);
  
  printf ("%d\n", g);
  
  return 0;
}
