#include <stdio.h>
 
int main()
{
 // relational operators: < <= > >= == !=
 int a = 10;
 // printf("a is not 10? %d", a != 10);
 
 if (a == 10)
  printf("a is 10 \n");
 else
  printf("a is not 10 \n");
 
 if (a == 10)
 {
  printf("a is 10 \n");
 }
 else
 { // program block
  printf("a is not 10 \n");
  printf("a is something else than 10 \n");
  }
 
  // is a between 1 and 11 (limits are with) [1,11] or not -> nested if else statements are possible
  if (a >= 1)
  if (a <= 11)
  printf("a is between 1 and 11 \n");
  else
  printf("a is NOT between 1 and 11 \n");
  else
  printf("a is NOT between 1 and 11 \n");
 
 
  // several options: tell the name of the value of a, a is between 1 and 5
  a = 4;
  if (a == 1)
  printf("a is one \n");
  else if (a == 2)
  printf("a is two \n");
  else if (a == 3)
  printf("a is three \n");
  else if (a == 4)
  printf("a is four \n");
  else if (a == 5)
  printf("a is five\n");
 else
  printf("a is something else\n");
 
 // switch case (several choices, can be used with integer and characters)
 switch (a)
 {
  case 1: printf("a is one \n"); break;
  case 2: printf("a is two \n"); break;
  case 3: printf("a is three \n"); break;
  case 4: printf("a is four \n"); break;
  case 5: printf("a is five \n"); break;
  default: printf("a is something else\n");
 }
 
 // tell, if a is an odd or even value, a is 1 ...6
 a = 5;
 switch (a)
 {
  case 1: printf("a is odd \n"); break;
  case 2: printf("a is even \n"); break;
  case 3: printf("a is odd \n"); break;
  case 4: printf("a is even \n"); break;
  case 5: printf("a is odd \n"); break;
  case 6: printf("a is even \n"); break;
 }
 
 switch (a)
 {
  case 1:
  case 3:
  case 5: printf("a is odd \n"); break;
  case 2:
  case 4:
  case 6: printf("a is even \n"); break;
 }
 
 // logical operators && || !
 // if a between 1 and 11
 if (a >= 1 && a <= 11)
  printf("a is 1 - 11\n");
 else
  printf("a is NOT 1 - 11\n");
 
 if (a < 1 || a > 11)
  printf("a is NOT 1 - 11\n");
 else
  printf("a is 1 - 11\n");
 
 
 
 return 0;
}
 
// ==============================================
#include <stdio.h>
#include <math.h>
 
int main()
{
 /*
  12
  Program solves a quadratic equation
  Note: you have to include math.h to your source file and
  then use sqrt() function.
  2 roots
  */
 
  float a, b, c, x1, x2;
  printf("Give a: \n");
  scanf("%f", &a);
 
  printf("Give b: \n");
  scanf("%f", &b);
 
  printf("Give c: \n");
  scanf("%f", &c);
 
  float d1 = b*b - 4 * a * c;
 
  if (d1 >= 0)
  {
  x1 = (-b + sqrt(d1))/(2*a);
  x2 = (-b - sqrt(d1))/(2*a);
  }
 
  printf("x1 is %f \n", x1);
  printf("x2 is %f \n", x2);
 
 
 
 return 0;
}
 
 
// ========================================
#include <stdio.h>
 
int main()
{
 // loops: for while do while
 // example: print Hello 5 times
 int k;
 
 for (k = 0; k < 5; k = k + 1 )
 {
  printf("Hello \n");
 }
 
 for (k = 0; k < 5; k++ )
 {
  printf("Hello \n");
 }
 
 // calculate the sum of values 1 ... 15
 int sum = 0;
 for (k = 1; k <= 15; k++ )
 {
  sum = sum + k;
 }
 
 printf("SUM IS %d \n", sum);
 
 // calculate the sum of values 0.5 ... 15.5 (step is 0.5)
 float i;
 float sum2 = 0 ;
 for (i = 0.5; i <= 15.5; i = i + 0.5)
 {
  sum2 = sum2 + i;
 }
 
 printf("Sum is %f \n", sum2);
 
 // print values 10, 9, 8 ... 0
 for (k = 10; k >= 0; k--)
 {
  printf("k is %d \n", k);
 
 }
 
 
 
 return 0;
}