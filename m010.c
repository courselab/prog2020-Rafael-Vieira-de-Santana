/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
	int totaldays, dayoftheweek;
  
	totaldays = day - 1;
  
	if (month == 1)
	totaldays = totaldays + 0;

	else
	if (month == 2)
	totaldays = totaldays + 31;
  
	else
	if (month == 3)
	totaldays = totaldays + 31 + 29;
	
	else
	if (month == 4)
	totaldays = totaldays + 31 + 29 + 31;
	
	else
	if (month == 5)
	totaldays = totaldays + 31 + 29 + 31 + 30;
	
	else
	if (month == 6)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31;
	
	else
	if (month == 7)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30;

	else
	if (month == 8)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30 + 31;
	
	else
	if (month == 9)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
	
	else
	if (month == 10)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
	
	else
	if (month == 11)
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
	
	else
	totaldays = totaldays + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;

	dayoftheweek = totaldays % 7;
  
	if (dayoftheweek == 0)
	return 3;
  
	else
	if (dayoftheweek == 1)
	return 4;
  
	else
	if (dayoftheweek == 2)
	return 5;
  
	else
	if (dayoftheweek == 3)
	return 6;
	
	else
	if (dayoftheweek == 4)
	return 0;
	
	else
	if (dayoftheweek == 5)
	return 1;
	
	else
	return 2;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
