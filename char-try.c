#include <stdio.h>

int main(void)
{
  char a[5] = "abcd";
  char* str = &a[0];

  printf("str points to value: %c\n", *str);
  return 0;
}
