/* Fundamental types and sizeof operator
   Fan BU
   Aug 6, 2020
*/

#include <stdio.h>

int main(void)
{
    int a=5, b=3;
    double average = (a+b)/2.0;
    char ch = 'e';

    printf("on my system:\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(ch));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));
    return 0;
}
