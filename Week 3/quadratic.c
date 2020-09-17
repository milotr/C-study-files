#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, square, x1, x2;
  printf("Give a: \n");
  scanf("%f", &a);
 
  printf("Give b: \n");
  scanf("%f", &b);
 
  printf("Give c: \n");
  scanf("%f", &c);

  square = b*b - 4*a*c;

  if (square >= 0)
  {
  x1 = (-b + sqrt(square))/(2*a);
  x2 = (-b - sqrt(square))/(2*a);
  }
 
  printf("x1 is %f \n", x1);
  printf("x2 is %f \n", x2);
 

 return 0;
}