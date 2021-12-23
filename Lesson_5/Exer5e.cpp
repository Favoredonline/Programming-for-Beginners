/* Write a program to evaluate the Grade of a student for the following constraints:
If marks > 75 - grade A
If 60 < marks < 75 - grade B
If 45 < marks < 60 - grade C
If 35 < marks < 45 - grade D
If marks < 35 - grade E 

Solution */

#include <stdio.h>
int main ()
{
int mark;

printf ("\aEnter your mark: \n");
scanf ("%d", &mark);

if (mark>=75)
printf ("Grade A");
else if (mark<75 && mark>=60)
printf ("Grade B");
else if (mark<60 && mark>=45)
printf ("Grade C");
else if (mark<45 && mark>=35)
printf ("Grade D");
else if (mark<35)
printf ("Grade E");
}
