/* Print a table of sine and cosine values
   for numbers in (0,1)
   Fan Bu
   Aug 8, 2020
*/

#include <stdio.h>
#include <math.h> // load math library, which includes sin() and cos()

int main(void)
{
  int i; // iteration enumerator
  double sine, cosine; // to store computing results
  double x; // to store value between 0 and 1 as input

  printf("%10s%17s%17s\n", "value", "sine", "cosine");
  printf("%10s%17s%17s\n", "-----", "------", "------"); // print table header

  for(i=0; i<=20; i++) // compute values with 0.05 stepsize between 0 and 1
  {
    x = i/20.0;
    sine = sin(x);
    cosine = cos(x);
    printf("%10lf%17lf%17lf\n", x, sine, cosine);
  };
  
  printf("%10s%17s%17s\n", "-----", "------", "------"); // print table tail
  return 0;
}
