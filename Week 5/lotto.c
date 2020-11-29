// 16. Function prints out a lotto row.
#include <stdio.h>

void printLottoRow();
 
int main()
{
 printSum(5,6666);
 
 printf("The sum is %d \n", getSum(234,677));
 
 printLottoRow();
 return 0;
}
 
void printLottoRow()
{
 int i;
 int nros[] = {0,0,0,0,0,0,0};
 for (i = 0; i < 7; i++)
 {
  int newNr = rand() % 40 + 1; // 1 - 40
  int j;
  int isThere = 0;
  for (j = 0; j < i; j++)
  if (nros[j] == newNr)
  {
  isThere = 1;
  break;
  }
 
  if (isThere == 0)
  nros[i] = newNr;
  else
  i--;
 }
 
 for (i = 0; i < 7; i++)
  printf("%d ", nros[i]);
 
}
