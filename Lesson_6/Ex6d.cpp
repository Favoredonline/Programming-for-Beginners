/*2. Write a program to generate the following pattern...
1
12
123
1234
12345
123456
*/

#include <stdio.h>
main()
{
int i, j, k, x;

i = 9;
x = 1;

for (j = 0; j <= i ; j++)
{
printf("\n");
for (k = x; k <= j; k++) /*inner for loop*/
printf("%d ", k);
}

}
