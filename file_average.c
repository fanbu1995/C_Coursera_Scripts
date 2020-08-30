
/* Compute a better average
   (reading numbers from file "data")
   Optional homework, week 2
   Fan Bu, Aug 7 2020
*/

#include <stdio.h>

int main(void)
{
  int i;
  double x, avg=0.0, navg, sum=0.0;
  FILE *fptr;

  // open file first
  fptr = fopen("data.txt", "r");

  printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
         "count", "item", "average", "naive avg",
         "_____", "____", "_______", "_________");

  for(i=1;fscanf(fptr,"%lf",&x)==1;++i){
    avg += (x-avg)/i;
    sum += x;
    navg = sum/i;
    printf("%5d%17e%17e%17e\n", i, x, avg, navg);
  }

  // then close file
  fclose(fptr);
 
  return 0;
}
