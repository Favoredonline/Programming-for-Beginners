
/*4. Write a program to display the following patterns...
*******
******
*****
****
***
**
*
Solution */

#include <stdio.h>
#include <stdio.h>
main()
{
int i, j, k, x;

i = 1;
x = 1;

for (j = 5; j >= i ; j--)
{
printf("\n");
for (k = x; k <= j; k++) /*inner for loop*/
printf("%d", k);
}

}
