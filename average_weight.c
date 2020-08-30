/* Compute average weight of elephant seals
   using data from a file read into an array
   Fan Bu
   Aug 9, 2020
*/

#include <stdio.h>
#include <stdlib.h>


/* function to compute array average */
double array_average(int length, int data[])
{
  double avg = 0.0;
  int i;
  
  for(i=0; i<length; i++)
    avg += (data[i]-avg)/(i+1); // using the smart compuation of average

  return avg;
}


/* main function */
int main(void)
{
  int i, length; // i: index varible; length: variable for array length
  int x;  // the placeholder for saving new read-in data entry
  double average = 0.0; // variable for average weight
  
  int data[2000]={0}; // array storage that is long enough

  FILE *fptr;  // pointer to file
  fptr = fopen("elephant_seal_data.txt", "r");

  if(fptr == NULL){
    printf("Error reading data file!\n");
    exit(0);
  }

  for (i=0; fscanf(fptr, "%d\t", &x)==1; i++)
    data[i] = x;

  length = i; // get the length of array
  
  average = array_average(length, data);

  printf("Average of %d total weights is: %lf\n\n", length, average);
  return 0;
}
