/* Example 2
write a program to swap number*/

#include <stdio.h>
void swapstdnum(int *stdnum1, int *stdnum2)
{
int score;

score = *stdnum1;
*stdnum1 = *stdnum2;
*stdnum2 = score;
}
int main( )
{
int s1 = 11, s2 = 77 ;
printf("the original stdnum:");
printf("\nThe value of s1 is: %d", s1);
printf("\nValue of s2 is: %d", s2);

/*calling swap function*/
swapstdnum( &s1, &s2 );

printf("\nAfter swapping:");
printf("\nThe value of s1 is: %d", s1);
printf("\nThe value of s2 is: %d", s2);
}
