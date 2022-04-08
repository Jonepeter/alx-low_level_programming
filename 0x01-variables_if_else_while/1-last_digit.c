#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main 
 * return  
 */
int main(void)
{
  int n, last;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  char str[] = "Last digit of";
  last = n % 10;
  if (last > 5)
    printf("%s %d is %d and is greater than 5\n", str, n, last);
  else if (last == 0)
    printf("%s %d is %d and is 0\n", str, n, last);
  else if (last < 6)
    printf("%s %d is %d and is less than 6 and not 0\n", str, n, last);

  return (0);
}
