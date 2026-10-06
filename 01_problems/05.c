#include <stdio.h>
#include <conio.h>

int main()
{
int p,t;
float r;

printf("enter the principle amount:");
scanf("%d",&p);

printf("enter the time period:");
scanf("%d",&t);

printf("enter the rate of interest:");
scanf("%f",&r);

printf("the simple interest on these conditions is %.4f",(p*t*r/100));
return 0;
}