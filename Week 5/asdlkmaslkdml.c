 #include <stdio.h>
 
// functions
void printArray(int t[], int size);
void remove10(int t[], int size);
 
void sayHello();
void sayGoodbye();
 
int main()
{
  int values[] = {88,99,0,456,32};
  printArray(values, 5);
  remove10(values, 5);
  printArray(values, 5);
 
 sayHello();
 
 return 0;
}
 
void sayHello()
{
 printf("Hello ");
 sayGoodbye();
}
void sayGoodbye()
{
 printf("Goodbye ");
 sayHello();
}
 
void remove10(int t[], int size)
{
 int i;
 for (i = 0; i < size; i++)
  t[i] = t[i] - 10;
}
 
void printArray(int t[], int size)
{
 int i;
 for (i = 0; i < size; i++)
  printf("%d \n", t[i]);
} 