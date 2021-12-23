/*nExample 
Write a program to accept 2 numbers. Calculate the difference between the two values.
Solution */

#include <stdio.h>
int main ()
{
int a, b, difference;
printf ("Input a number x: ");
scanf ("%d", &a);
printf ("Input a number y: ");
scanf ("%d", &b);
difference = a-b;
if (difference==a)
printf ("The difference between %d and %d is equal to %d", a, b, a);
else if (difference==b)
printf ("The difference between %d and %d is equal to %d", a, b, b);
else
printf ("The difference between %d and %d is not equal to any of the values entered", a,

b);
}


