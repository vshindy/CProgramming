/* Lab Programming Assignment - Program that calculates student grades following rules from our class
	Written by: Cody Ramsey and Vera Shindyapin
	Date: 4/17/2013
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Functional Declarations
int askUser(int limit);
void printGrade (int total);

int main(void)
{
//Local Statements
	int gradeA;
	int assgn1;
	int assgn2;
	int assgn3;
	int assgn4;
	int assgn5;
	int assgn6;
	int assgn7;
	int assgn8;
	int midterm;
	int final;
	int codeLab;
	int lab;
	int total;
	int totalPercent;

//Statements
	printf("Please enter 8 assignments grades one at a time\n");
	assgn1 = askUser(20);
	assgn2 = askUser(20);
	assgn3 = askUser(20);
	assgn4 = askUser(20);
	assgn5 = askUser(20);
	assgn6 = askUser(20);
	assgn7 = askUser(20);
	assgn8 = askUser(20);
	printf("Enter midterm grade");
	midterm = askUser(75);
	printf("Enter final grade");
	final = askUser(125);
	printf("Enter Lab Excerises");
	lab = askUser(40);
	printf("Enter CodeLab");
	codeLab = askUser(20);
	printf("\n");
	printf("Assignment Grades: %3d %3d %3d %3d %3d %3d %3d %3d\n", assgn1, assgn2, assgn3, assgn4, assgn5, assgn6, assgn7, assgn8);
	printf("Midterm: %3d\n", midterm);
	printf("Final: %3d\n", final);
	printf("Lab Excercises: %3d\n", lab);
	printf("Codelab: %3d\n", codeLab);
	total = (assgn1 + assgn2 + assgn3 + assgn4 + assgn5 + assgn6 + assgn7 + assgn8 + midterm + final + lab + codeLab);
	printf("Total Points: %3d\n", total);
	totalPercent = (assgn1 + assgn2 + assgn3 + assgn4 + assgn5 + assgn6 + assgn7 + assgn8 + midterm + final + lab + codeLab)/ 4;
	printf("Percent of total points: %d\n", totalPercent);
	printf("Grade: ");
	printGrade(totalPercent);

	return 0;
}//End of main

int askUser(int limit)
{
//Local Statements
	int grade;

//Statements
	printf("-->");
	scanf("%d", &grade);
	if (grade > limit || grade < 0)
		{
			printf("Invalid grade. Please enter a new grade.\n");
			printf("-->");
			scanf("%d", &grade);
				if (grade > limit || grade < 0)
				{
					printf("Failure.");
					exit(0);
				}
				else 
					{
						printf("Thank you!\n");
						return grade;
					}
		}
	else
		{
			printf("Thank you!\n");
			return grade;
		}

	return;
}//End of askUser

void printGrade (int total)
{
//Local Declarations
        char grade;
        int temp;

//Statements
        temp = total / 10;
        switch (temp)
{
        case 9 : grade = 'A'; printf("%c\n", grade);
			break;

        case 8 : grade = 'B'; printf("%c\n", grade);
			break;

        case 7 : grade = 'C'; printf("%c\n", grade);
			break;

        case 6 : grade = 'D'; printf("%c\n", grade);
			break;

        case 5 :
        case 4 :
        case 3 :
        case 2 :
        case 1 : grade = 'F'; printf("%c\n", grade);
			break;

        default: printf("Invalid percent\n");
} //switch
        return;
} //printGrade




