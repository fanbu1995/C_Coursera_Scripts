/* program to count char types from input
   Fan Bu
   Aug 8, 2020
*/

#include <stdio.h>

int main(void)
{
  int blanks = 0, digits = 0, letters = 0, others = 0;
  int c; //used for int value of character
  while((c=getchar()) != EOF) //EOF: constant that means end of file
  {
    if (c==' ')
      ++blanks;
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // || lower precedence than &&!
      ++letters;
    else if (c >= '0' && c <= '9')
      ++digits;
    else
      ++others;
  };
  printf(" blanks = %d, digits = %d, letters = %d, others = %d\n\n", 
         blanks, digits, letters, others);
  return 0;
}
