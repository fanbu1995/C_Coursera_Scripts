/* Distance of a marathon in km
by Fan Bu
Aug 6, 2020
*/

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double km;
    km = 1.609 * (miles + yards / 1760.0);
    printf("\n A marathon is %lf kilometers.\n\n", km);
    return 0;
}
