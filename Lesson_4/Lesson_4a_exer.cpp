
/* A program to accept the salary and age of a person and display it as output */

#include <stdio.h>
int main ()
{
//declaring variable
int salary;
int age;

//reading data
printf ("input salary here:\t ");
scanf("%d" , &salary);
printf ("input age here:\t ");
scanf ("%d" , &age);

//output
printf ("salary = %d" , salary);
printf ("\nage = %d" , age);
}


