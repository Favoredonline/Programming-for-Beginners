/* Example 7
Write a program to show your computer's capabilities.
The user types in a letter of the alphabet and your program should display the corresponding language
or package available. Some sample input and output is given below:
Input Output
A or a Ada
B or b Basic
C or c COBOL
D or d dBASE III
f of F Fortran
p or P Pascal
v or V Visual C++
Using the 'switch' statement to choose and display the appropriate message. Use the default label to
display a message if the input does not match any of the above letters.
Solution */

#include <stdio.h>
int main ()
{
char a, A, B, b, C, c, D, d, F, f, P, p, V, v, letter;
printf ("Input a letter: ");
scanf ("%c", &letter);
switch (letter)
{
case 'A':
case 'a':
printf ("Ada");
break;
case 'B':
case 'b':
printf ("Basic");
break;
case 'C':
case 'c':
printf ("COBOL");
break;
case 'D':
case 'd':
printf ("dBASE III");
break;
case 'F':
case 'f':
printf ("Fortran");
break;
case 'P':
case 'p':
printf ("Pascal");
break;
case 'V':
case 'v':
printf ("Visual C++");
break;
default:
printf ("Invalid input");

}
}
