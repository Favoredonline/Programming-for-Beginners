#include <stdio.h>
int main()
{
int student = 20;
printf("The Value of variable student is: %d", student);
/* To print the address of a variable we use %p
* format specifier and ampersand (&) sign just
* before the variable name like &num.
*/
printf("\nThe Address of variable student is: %p", &student);
return 0;
}
