#include<stdio.h>
 
int main() {
   int upper = 0, lower = 0;
   char ch[80];
   int i;
 
   printf("\nEnter The String : ");
   scanf(ch);
 
   i = 0;
   while (ch[i] != " ") {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }
 
   printf("\nUppercase Letters : %d", upper);
   printf("\nLowercase Letters : %d", lower);
 
   return (0);
}