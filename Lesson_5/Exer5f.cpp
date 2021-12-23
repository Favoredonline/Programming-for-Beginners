/* Example 6
1. Declare two variables x and y. Assign values to these variables. Number x should be printed only
if it is less than 2000 or greater than 3000, and number y should be printed only if it is between 100 and
500.
Solution*/

#include <stdio.h>
int main ()
{
int x;
int y;
printf ("Input a number x: ");
scanf ("%d", &x);
if (x<2000 || x>3000)
printf ("The number inputed is %d", x);
else
printf ("invalid input");
printf ("\nInput a number y: ");
scanf ("%d", &y);
if (y<=500 && y>=100)
printf ("\nThe number inputed is %d", y);
else
printf ("invalid input");

}
