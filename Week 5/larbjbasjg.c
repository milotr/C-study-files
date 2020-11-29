#include <stdio.h>
 
// functions
// changing values inside functions
void add20ToThis(int a);
 
void add20ReallyToThis(int * b);
// int * b is a pointer variable
// can store addresses of integer variables
 
// static variable: presever the data outside main()
void testMe();
 
 
int main()
{
  int x = 50;
  printf("x is %d \n", x);
  add20ToThis(x); // passing by value
 
  add20ReallyToThis(&x); // &x means the address of variable x
  // passing by reference
  printf("x is %d \n", x);
 
  testMe();
  testMe();
  testMe();
  testMe();
  testMe();
 
 return 0;
}
 

 // function returning 


void testMe()
{
 static int kk = 0;
 kk++;
 printf("kk is %d \n", kk);
}

void add20ReallyToThis(int * b)
{
 *b = *b + 20; // *b refers the memory's place itself
}
 
void add20ToThis(int a)
{
 a = a + 20;
}