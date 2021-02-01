#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 FILE *tiedosto;
 char yht[256];
 char nimi[] = "amount_of_visitors.txt";
 
 // open the file for reading
 tiedosto = fopen(nimi,"r");
 if (tiedosto == NULL)
  return 1;
 
 fgets(yht, 10, tiedosto); // read contents
 
 fclose(tiedosto);
 
 int y = atoi(yht); // convert to numerical format
 y++; // add one
 
 // open for writing
 tiedosto = fopen(nimi,"w");
 if (tiedosto == NULL)
  return 1;
 
 // convert to string
 fprintf(tiedosto,"%d",y);
 fclose(tiedosto);
 
 // print current value
 printf("%d \n", y);
 
 
 // unix/linux: gcc code.c -o code
 // https://www.osboxes.org/ubuntu/#ubuntu-14_04-vmware
 // https://www.vmware.com/products/workstation-player/workstation-player-evaluation.html
}
  