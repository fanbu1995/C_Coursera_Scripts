/* Time rand() function calls
   Fan Bu
   Aug 8, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 100000000 // number of fct calls
#define NCOLS 8 // number of columns in output
#define NLINES 3 // number of lines in output

int main(void)
{
  int i, val;
  clock_t begin, end;
  double diff;

  begin = clock();
  srand(time(NULL)); // seed rand() by time();
  printf("\nTiming test: %d calls to rand()\n\n", NCALLS);
  for(i=1; i<=NCALLS; i++)
  {
    val = rand();
    if(i <= NCOLS * NLINES){
      printf("%12d", val);
      if(i % NCOLS == 0)
        putchar('\n');
    }
    else if(i == NCOLS * NLINES + 1)
      printf("%7s\n\n", "......");
  }
  end = clock();
  diff = (double)(end - begin) / CLOCKS_PER_SEC; // calculate double time duration
  printf("%s%ld\n%s%ld\n%s%lf\n%s%.10f\n\n",
    "          end time:", end,
    "        begin time:", begin,
    "      elapsed time:", diff,
    "time for each call:", (double)diff/NCALLS);
  return 0;
}
