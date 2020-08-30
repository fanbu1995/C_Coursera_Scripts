/* merge sort example
   O(n logn) efficiency
   Fan Bu
   Aug 9, 2020
*/

#include <stdio.h>

void print_array(int how_many, int data[], char *str)
{
  int i;
  printf("%s", str);
  
  for(i = 0; i < how_many; i++)
    printf("%d\t", data[i]);
}

void merge0(int a[], int b[], int c[], int m, int n)
{
  int i=0, j=0, k=0;
  
  while(i < m && j < n)
    if (a[i] < b[j])
      c[k++] = a[i++];
    else
      c[k++] = b[j++];

  while(i < m)
    c[k++] = a[i++];
  while(j < n)
    c[k++] = b[j++];
} // basic merge

void merge(int a[], int b[], int c[], int how_many) // a,b same size
{
  int i=0, j=0, k=0;
  while(i < how_many && j < how_many)
    if (a[i] < b[j])
      c[k++] = a[i++];
    else
      c[k++] = b[j++];
  while (i < how_many)
    c[k++] = a[i++];
  while (j < how_many)
    c[k++] = b[j++];
}

void mergesort(int key[], int how_many) // how_many = power of 2
{
  int j,k;
  int w[how_many];
  
  for(k=1; k < how_many; k *=2){
    for(j=0; j < how_many-k; j += 2*k)
      merge(key + j, key+j+k, w+j, k); // compare two segments of length k
    for(j=0; j < how_many; j++)
      key[j] = w[j];           // copy over to original array
  }
}

int main(void)
{
  const int SIZE = 8;
  int a[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};
  print_array(SIZE, a, "My grades are:\n");
  printf("\n\n");
  mergesort(a, SIZE);
  print_array(SIZE, a, "My sorted grades are:\n");
  printf("\n\n");
  return 0;
}

