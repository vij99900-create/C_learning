#include <stdio.h>
#include <conio.h>

int main()
{
float c;

printf ("Enter  the temperaturer in celcius:");
scanf("%f",&c);
printf("the celcius temperature %.3f is equal to %.3f degrees in farenheit",c ,((c*9/5)+32));
return 0;
}

