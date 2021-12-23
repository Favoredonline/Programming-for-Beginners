/*Write a program to print a multiplication table for a given number.//
Solution */

#include <stdio.h>
main ()
{
int num;
int val;

printf ("Input a number:");
scanf ("%d", &num);

for (val=1; val<=12; val++)
{
printf ("\n%d x %d = %d", num, val, num*val);
}
}
