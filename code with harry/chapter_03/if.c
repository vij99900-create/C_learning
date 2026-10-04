#include <stdio.h>
#include <conio.h>

int main()
{
int age = 20;
if (age>15)
{
    printf("we are inside if statements\n");
    printf("age is greater than 15\n");
}
if(age%5==0)
{
printf("we are inside another if statement\n");
printf("age is divisible by 5\n");
}
return 0;
}