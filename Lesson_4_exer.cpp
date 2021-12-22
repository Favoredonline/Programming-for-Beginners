/* A program to find the area and perimeter of a circle */
#include <stdio.h>
int main()
{
//variable declaration
int r;
float p;
float A;
//reading data
printf ("\ninput radius of the circle: \t");
scanf ("%d", &r);
// calculation
p = 2*3.143*r;
A = 3.142*r*r;
//output
printf ("\nPerimeter of the circle = %d", p);
printf ("\nArea of the cicle is = %f", A );
return 0;
}
