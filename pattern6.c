#include <stdio.h>
int main() 
{
  int i = 1, j;
  do {
    j = 1;
    do {
      printf("%d * %d = %d\n", i, j, i*j);
      j++;
    } while (j <= 10);
    i++;
  } while (i <= 2);
  return 0;
}
