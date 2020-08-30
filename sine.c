/* A function to compute sine of value on (0,1)
   Fan Bu
   Aug 6, 2020
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  double x, res;

  printf("Input a number on (0,1):\n");
  scanf("%lf", &x);
  
  res = sin(x);
  printf("The sine of %lf is %lf\n", x, res);
  
  return 0;
}
