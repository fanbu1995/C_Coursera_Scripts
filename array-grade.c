/* use of array to calculate average grade
   Fan Bu    Aug 8, 2020
*/

#include <stdio.h>

int main(void)
{
  const int SIZE = 5;

  int grades[SIZE] = {78, 67, 92, 83, 88};
  double sum = 0.0;
  int i;

  printf("\n my grades are:\n");

  for (i=0; i < SIZE; i++){
    printf("%d\t", grades[i]);
    sum += grades[i];
  };

  printf("\n\n");
  printf("my average is %.2f\n\n", sum/SIZE);
  
  return 0;

}
