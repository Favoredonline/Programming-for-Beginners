/* Example 6
//Accept three variables and print the highest value.//
Solution */

#include <stdio.h>
int main ()
{
int a, b, c;
printf ("You are to input three numbers");
printf ("\nLet the numbers be different");
printf ("\nInput a number x: ");
scanf ("%d", &a);
printf ("Input a number y: ");
scanf ("%d", &b);
printf ("Input a number z: ");
scanf ("%d", &c);
if (a>b && a>c)
printf ("\nThe greatest number is %d", a);
else if (b>a && b>c)
printf ("\nThe greatest number is %d", b);
else if (c>b && c>a)
printf ("\nThe greatest number is %d", c);

}
