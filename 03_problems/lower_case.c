#include <stdio.h>
int main()
{
char ch;
printf ("Enter a character:");
scanf ("%c",&ch);
printf ("The character is : %c\n", ch);
printf ("The ASCII value of character is: %d\n",ch);

if (ch >=97 && ch <=122)
    printf ("This character is lower case \n");
else
    printf ("This character is not lower case \n");    

return 0;
}