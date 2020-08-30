/* pointer example code
   Fan Bu
   Aug 9, 2020
*/

#include <stdio.h>

int main(void)
{
  const int SIZE = 5;
  
  int grades[SIZE] = {78, 67, 92, 83, 88};
  double sum = 0.0;
  double *ptr_to_sum = &sum; // initialize pointer as address of "sum"
  int i;
  
  printf("\n my grades are:\n");

  for (i=0; i < SIZE; i++){
    printf("%d\t", grades[i]);
    sum += grades[i];
  };

  printf("\n\n");
  printf("my average is %.2f\n\n\n\n", sum/SIZE);

  printf("sum is at %p, or %lu and is %lf\n",
         ptr_to_sum, // the value of pointer, as a hex number
         (unsigned long)ptr_to_sum, // the value of pointer, as a decimal number 
         *ptr_to_sum);  // de-referencing: look inside and return the value
  printf("grades are at %lu to %lu\n", 
          (unsigned long)grades, (unsigned long)(grades + 5)); // start to end of the address of the grades array

  return 0;
}
