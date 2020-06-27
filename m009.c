/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define NOT 0
#define CHANGE 1
#define MAX 100

/* Sort the first 'n' integers values in 'vector'. */

void sort (int* vector, int n)
{
	int i, j, k, localmin, location, state;
	state = NOT;
	
	for ( i = 0; i+1 < n; ++i)
	{
		//printf("----- pass %d ----- \n", i);
		
		//printf("current config: ");
		
		for (k = 0; k < n; ++k)
		//printf("%d ", vector[k]);
		
		//printf ("\n");
		
		for (j = i+1; j < n; ++j)
		{
			//printf("comparing variable %d to variable %d\n", i, j);
			
			if (state == CHANGE)
			{
				if (vector [j] < localmin)
				{
					//printf("variable %d is even smaller than variable %d\n", j, localmin);
					
					localmin = vector[j];
					location = j;
				}
			}
				
			else
			if (state == NOT)
			{
				if (vector[i] > vector [j])
				{
					localmin = vector[j];
					location = j;
					
					state = CHANGE;
					
					//printf("variable %d is smaller than variable %d\n", j, i);
				}
			}
		}
		
		if (state == CHANGE)
		{
			vector [location] = vector [i];
			vector [i] = localmin;
			
			//printf("localmin: %d\n", localmin);
			
			state = NOT;
		}
	}
}

#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */
