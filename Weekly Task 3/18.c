#include <stdio.h>
#include <stdlib.h>

int main(){
 int i;
 int sum = 0;
 for (i = 1; i <= 50; i++)
 {
  int y = rand() % 10;
  sum = sum + y;
 }
 printf("%d\n", sum);
 return 0;
}
