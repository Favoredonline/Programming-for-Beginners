/*Example 4
4.Montek company gives allowances to its employees depending on their grades as follows:
Grade Allowance
A 300
B 250
Others 100 Calculate the salary at the end of the month. Accept Salary and Grade from the user)
Solution */

#include<stdio.h>
int main()
{
int salary;
char ch;
ch = 'A', 'B';
printf("\nEnter Grade: ");
scanf("%c", &ch);
printf("\nEnter Salary: ");
scanf("%d", &salary);
if (ch == 'A')
printf("\nEOM Salary = %d", salary+300);
else if (ch == 'B')
printf("\nEOM Salary = %d", salary+250);

else
printf("\nEOM Salary = %d", salary+100);
}
