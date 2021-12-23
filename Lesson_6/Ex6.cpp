/*Example 1
Write a program to print the series 100, 95, 90, 85, ........., 5.
Solution*/

#include <stdio.h>
int main ()
{
int i;
for (i = 100; i >= 5; i -= 5)
printf ("\n%d", i);
}
