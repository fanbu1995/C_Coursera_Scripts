/* Use of simple arrays as parameters
   Fan Bu  Aug 9, 2020
*/

#include <stdio.h>

double average_grades(int how_many, int grades[]) // flexible length for array
{
  int i;
  double sum = 0.0;

  for (i=0; i<how_many; i++)
    sum += grades[i];
  return(sum/how_many);
}

void print_grades(int how_many, int grades[])
{
  int i;
  
  printf("I have %d grades\n", how_many);
  for (i=0; i < how_many; i++)
    printf("%d\t", grades[i]);
}

int main(void)
{
  const int SIZE=5;
  int grades[SIZE] = {78, 67, 94, 88, 92};
  
  print_grades(SIZE, grades);
  printf("\n\n");
  printf("my average is %.2f\n\n", average_grades(SIZE, grades));

  return 0;
}
