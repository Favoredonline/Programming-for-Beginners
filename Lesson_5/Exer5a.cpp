//Example 2//
/*Write a program to accept 2 numbers and tell whether the product of the two numbers is equal to or
greater than 1000.*/
//Solution//

#include <stdio.h>
int main ()
{
int a, b, product;
printf ("Input a number x: ");
scanf ("%d", &a);
printf ("Input a number y: ");
scanf ("%d", &b);
product = a*b;
if (product>1000)
printf ("The product of x and y is greater than 1000");
else if (product==1000)
printf ("The product of x and y is equal to 1000");
else
printf ("The product of x and y is less than 1000");

}
