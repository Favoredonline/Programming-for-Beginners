/* Write a program to evaluate the net salary of an employee given the following constraints:
Basic salary = $1200,
DA = 12% of basic salary,
HRA = $150,
TA = $120,
Others = $450,
Tax cuts - a) PF = 14% of basic salary b) IT = 15% of basic salary
Net salary = basic salary + DA + DHA + TA + Others - (PF + IT)
A program to evaluate the net salary given some constraint */

//Solution//

#include <stdio.h>
int main ()
{
//declaring variable
int basic_salary;
int DA;
int HRA;
int TA;
int others;
int PF;
int IT;
int net_salary;

//assigning value to variable
basic_salary = 12000;
DA = 0.12*12000;
HRA = 150;
TA = 120;
others = 450;
PF = 0.14*12000;
IT = 0.15*12000;

//assigning operation to variables using variable net_salary
net_salary = basic_salary + DA + HRA + TA + others - (PF+IT);

//output
printf ("\nThe net salary of the employee is %d", net_salary);
}
