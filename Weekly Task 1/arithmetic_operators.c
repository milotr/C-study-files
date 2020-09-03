/* 
+
- 
*
/
%
++
--
*/
#include <stdio.h>

int main() {
    int a = 5;
int b = 3;
int c;
c = a + b;
printf("c is now %d\n", c);
c = a - b;
printf("c is now %d\n", c);
c = a * b;
printf("c is now %d\n", c);
c = a / b;
printf("c is now %d\n", c);
/* integer division is in use in C and some other languages */

c = a % b;
printf("c remains of a and b: \n", c);


double d = (double) a/b;
printf("d is %f \n", d);
/* a is converted to double and d is of double type */

c = d;
printf("c is now %d \n", c);
}