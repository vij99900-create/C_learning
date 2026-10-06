#include <stdio.h>
#include <conio.h>

int main()
{int age = 5;
if (age>10)
{
    printf("we are inside if statements\n");
    printf("age is greater than 10\n");
}
else 
{
printf("age is not greater than 10\n");

if(age%5==0)
printf("we are inside another if statement\n");
printf("age is divisible by 5\n");
}
return 0;
}