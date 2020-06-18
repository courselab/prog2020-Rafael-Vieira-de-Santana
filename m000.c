/* m000.c - Pitagorean name number

   This program takes the a person's full name read as a string from 
   from the standard input and output its Pitagorean Number as shown 
   in reference [1] at the bottom of this source file.

   E.g.

      command line    : John Doe
      expected output : 35

   Directions:

      Please, edit function roman();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 255

/* Write the number 'n' in Roman numerals.*/

int pitagorean (char *s)
{
	int i, sum;
	i = 0;
	sum = 0;
	
	while (s[i+ 1] != 0)
	{
		if (s[i] == 'a' || s[i] == 'j' || s[i] == 's' || s[i] == 'A' || s[i] == 'J' || s[i] == 'S')
		sum = sum + 1;
		
		else
		if (s[i] == 'b' || s[i] == 'k' || s[i] == 't' || s[i] == 'B' || s[i] == 'K' || s[i] == 'T')
		sum = sum + 2;
		
		else
		if (s[i] == 'c' || s[i] == 'l' || s[i] == 'u' || s[i] == 'C' || s[i] == 'L' || s[i] == 'U')
		sum = sum + 3;
		
		else
		if (s[i] == 'd' || s[i] == 'm' || s[i] == 'v' || s[i] == 'D' || s[i] == 'M' || s[i] == 'V')
		sum = sum + 4;
		
		else
		if (s[i] == 'e' || s[i] == 'n' || s[i] == 'w' || s[i] == 'E' || s[i] == 'N' || s[i] == 'W')
		sum = sum + 5;
		
		else
		if (s[i] == 'f' || s[i] == 'o' || s[i] == 'x' || s[i] == 'F' || s[i] == 'O' || s[i] == 'X')
		sum = sum + 6;
		
		else
		if (s[i] == 'g' || s[i] == 'p' || s[i] == 'y' || s[i] == 'G' || s[i] == 'P' || s[i] == 'Y')
		sum = sum + 7;
		
		else
		if (s[i] == 'h' || s[i] == 'q' || s[i] == 'z' || s[i] == 'H' || s[i] == 'Q' || s[i] == 'Z')
		sum = sum + 8;
		
		else
		if (s[i] == 'i' || s[i] == 'r' || s[i] == 'I' || s[i] == 'R')
		sum = sum + 9;
		
		else
		if (s[i] == ' ')
		sum = sum + 0;
		
		++i;
	}
	
	return sum;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = pitagorean (name);
  
  printf ("%d\n", n);

  return 0;
}

/*  
    References:

    [1] Pitagorean name number
    https://en.wikipedia.org/wiki/Numerology#Pythagorean_system
*/
