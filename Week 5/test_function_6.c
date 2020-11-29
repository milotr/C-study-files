#include <stdio.h>
void sayHello();
void sayGoodbye();
 
int main()
{
 
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