//Example 5//
/* A program to ask for a person's first name and last name and print it out in the
format first name last name*/

//Solution//
#include <stdio.h>
int main ()
{
//variable declaration
char first_name[20];
char last_name[20];

//inputing and reading data
printf ("Enter your first name: ");
scanf ("%s", &first_name);
printf ("Enter your last name: ");
scanf ("%s", &last_name);

//output
printf ("\nYour name is %s %s", last_name, first_name);
}
