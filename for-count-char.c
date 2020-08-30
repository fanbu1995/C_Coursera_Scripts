/* count blanks, digits and total chars
   using for loop
   Fan Bu, Aug 8 2020
*/

#include <stdio.h>

int main(void)
{
  int blanks=0, digits=0, total_chars=0;
  int c;
  for(; (c=getchar()) != EOF; total_chars++ ) // empty 1st statement: no initialization needed here
  {
    if (c==' ')
      ++blanks;
    else if (c >= '0' && c<= '9')
      ++digits;
  };
  printf(" blanks = %d, digits = %d, total_chars = %d\n\n", 
           blanks, digits, total_chars);
  return 0;
}
