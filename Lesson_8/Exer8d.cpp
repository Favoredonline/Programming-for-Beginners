/*Example 4
example on realloc function */

#include <stdio.h>
#include <stdlib.h>

int main () {
char *str;

/* Initial memory allocation */
str = (char *) malloc(15);
strcpy(str, "Tech4Ladies");
printf("String = %s, Address = %u\n", str, str);

/* Reallocating memory */
str = (char *) realloc(str, 25);
strcat(str, ".com");
printf("String = %s, Address = %u\n", str, str);

free(str);

return(0);
}