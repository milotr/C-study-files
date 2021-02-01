#include <stdio.h>
#include <string.h>

int main () {
   char url[] = "centria.fi";
   char dot = '.';
   char *pointer;

   pointer = strchr(url, dot);

   printf("%s\n", pointer);
   
   return(0);
}