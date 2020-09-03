#include <stdio.h>

int main() {
   /* my first program in C */
   /* body of main function, also called implementation, the code itself */
   printf("Hello, World\n");
   printf("Why are you gay?\n");

   /* variables
   to store variables
   integers, floats, strings, booleans
   characters <-- datatypes needed. 

   define before use 
   save ram memory
   variable name: a-z, A-Z, digits, -, _
   good names for important variable
   */ 

/* while numbers */ 
short p1; /* 2 bytes, automatically signed, range: 32 766 - 32 767 */ 
/* short is datatype */
p1 = -30000;
unsigned short p2 = 50000; /* 0 - 69000 */ /* unsigned makes variables a little more flexible */ 

int p3 = 2000000; /* 4 bytes, +- 2 billions */
unsigned int p4 = 4000000;

/* long often similar to int */ 


/* floats */

float p5 = 123456.789; /* precision 7 digits, 4 bytes */ 
double p6 = 1234567.12345678; /* 15 digits, 9 bytes */ 

/* for single character */ 
char p7 = 'a';
char p8 = 93; /* whole number is also ASC11 code (UniCode) */ 

printf("p1 is %d \n", p1);
printf("p2 is %d \n", p2);

printf("p3 is %d \n", p3);
printf("p4 is %u \n", p4);

printf("p5 is %f \n", p5);
printf("p6 is %f \n", p6);

printf("p7 is %c \n", p7);
printf("p8 is %c \n", p8);

   return 0;
}