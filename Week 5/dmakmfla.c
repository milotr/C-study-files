#include <stdio.h>
 
// functions
// declaration
// prints "Kokkola"
void printKokkola();
// function prints the name I want
void printThis(char n[]);
// function prints some name several times
void printThisSeveralTimes(char n[], int times);
 
// function returns the remainder of 2 integers
int getRemainder(int a, int b);
 
 
 
int main()
{
 printKokkola();
 printThis("Vaasa");
 printThis("Helsinki");
 
 printThisSeveralTimes("New York", 5);
 
 int x = getRemainder(9, 5);
 printf("x is %d \n", x);
 
 printf("remainder is %d \n", getRemainder(8, 6));
 
 int y1 = 99;
 int y2 = 8;
 x = getRemainder(y1, y2);
 printf("x is %d \n", x);
 
 return 0;
}




// definition, implementation

void printThisSeveralTimes(char n[], int times)
{
 int i;
 for (i = 0; i < times; i++)
  printf("%s \n", n);
}
int getRemainder(int a, int b)
{
 int result = a % b;
 return result;
}
 

void printKokkola()
{
 printf("Kokkola \n");
}
 
void printThis(char n[])
{
 printf("%s \n", n);
} 