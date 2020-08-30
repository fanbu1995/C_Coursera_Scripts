/* Char in C
   Fan Bu
   Aug 6, 2020
*/

#include <stdio.h>

int main(void)
{
    char c = 'A';
    printf("c in ASCII is %d\n", c);
    printf("c the character: %c\n", c);
    printf("three consecutive characters: %c %c %c \n", c, c+1, c+2);
    printf("three bell rings: %c %c %c \n", '\a','\a','\a');
    return 0;
}
