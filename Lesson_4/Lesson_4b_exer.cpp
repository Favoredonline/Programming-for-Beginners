/* A program to evaluate the expression z = a*b+(c/d)-e*f */

#include <stdio.h>
int main ()
{
//declaring variables
int a = 10;
int b = 10;
float c = 15.75;
int d = 4;
int e = 2;
float f = 5.6;
float z = a*b+(c/d)-e*f;

//output
printf ("The value of a*b+(c/d)-e*f is %f", z);
}
