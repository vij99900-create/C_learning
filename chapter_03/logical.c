#include <stdio.h>
#include <conio.h>

int main()
{
int a, b;
printf("Enter the values for a and b: ");
scanf("%d %d", &a, &b);

printf("The value of a and b is %d",a&&b);
return 0;
}