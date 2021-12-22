//Example 5
/* A program to accept and add three numbers */
//Solution//


#include <stdio.h>
int main ()
{
//declaring variables
int a;
int b;
int c;
int res;

//inputing aand accepting data
printf ("Enter three numbers here:\n");
scanf ("\n%d", &a);
scanf ("\n%d", &b);
scanf ("\n%d", &c);

//assigning value
res = a+b+c;

//output
printf ("The sum of the numbers is %d", res);
}
