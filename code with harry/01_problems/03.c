/*#include <stdio.h>
#include <conio.h>

int main()
{
int r=6;

printf("the area of circle of radius %d is %.2f", r, 3.14*r*r);
return 0;
}*/


#include <stdio.h>
#include <conio.h>

int main()
{
int r,h;
printf ("enter the radius of the cylender:");
scanf("%d",&r);
printf ("enter the height of the cylender:");
scanf("%d",&h);
printf ("the volume of the cylinder with radius %d and height %d is %.3f: ",r, h,3.14*r*r*h);
return 0;
}


