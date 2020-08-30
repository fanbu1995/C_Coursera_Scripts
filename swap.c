/* call by reference
   a swap function
   Fan Bu
   Aug 9, 2020
*/

#include <stdio.h>

void swap(int a, int b)
{
  int temp = a;
  a = b; b = temp;
}

void swap2(int *a, int *b)
{
  int temp = *a;
  *a = *b; *b = temp;
}

int main(void)
{
  int i=3, j=5;
  int *pi = &i, *pj = &j;
  printf("i=%d, j=%d\n\n", i,j);
  swap(i,j);
  printf("after swap 1: i=%d, j=%d\n\n", i,j);
  swap2(pi,pj);
  printf("after swap 2: i=%d, j=%d\n\n", i,j);
  return 0;
}

