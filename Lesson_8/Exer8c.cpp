#include <stdio.h>
int main( )
{
/*Pointer variable*/
int *std;

/*Array declaration*/
int stdscore[5] = { 11, 22, 33, 44, 55 } ;

/* Assigning the address of val[0] the pointer
* You can also write like this:
* s = stdscore;
* because array name represents the address of the first element
*/
std = &stdscore[0];

for ( int i = 0 ; i<5 ; i++ )
{
printf("val[%d]: value is %d and address is %p\n", i, *std, std);
/* Incrementing the pointer so that it points to next element
* on every increment.
*/
std++;
}
return 0;
}
