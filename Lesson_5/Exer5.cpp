//Example 1//
/* Write a program that accepts two number a and b and checks whether or not a is divisible by b.*/
//Solution//

#include <stdio.h>
int main ()
{
int a, b, res;
printf ("Input a number x(divisor): ");
scanf ("%d", &a);
printf ("Input a number y(number to be divided): ");
scanf ("%d", &b);
res = b % a;
if (res==0)
printf ("%d is divisible by %d without remainder", b, a);
else
printf ("%d is not divisible by %d without remainder", b, a);

}
