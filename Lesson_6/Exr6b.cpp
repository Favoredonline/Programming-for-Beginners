/*2. Accept two numbers num1 and num2.
Find the sum of all odd numbers between the two numbers entered.
Solution */

#include <stdio.h>
main ()
{
int x;
int y;
int num1;
int num2;
int total;

total = 0;

printf ("Enter a number:\n");
scanf ("%d", &num1);
printf ("Enter another number:\n");

scanf ("%d", &num2);

if (num1 < num2)
{
for (x = num1+1; x < num2; x+=2)
if (x % 2 != 0)
{
total = total + x;
}
else
{
for (x = num1+2; x < num2; x+=2)
total = total + x;
}
printf ("\nThe sum of odd numbers between %d and %d is %d", num1,

num2, total);
}

else
{
total = 0;
for (x = num2+1; x < num1; x+=2)
if (x % 2 != 0)
{
total = total + x;
}
else
{
for (x = num2+2; x < num1; x+=2)

total = total + x;
}
printf ("\nThe sum of odd numbers between %d and %d is %d", num2,

num1, total);
}
}
