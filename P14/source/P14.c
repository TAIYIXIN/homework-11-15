#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int maximum(const int grades[][EXAMS], int pupils, int tests);
int minimum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setofgrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main(void)
{
	int student;
	int studentGrades[STUDENTS][EXAMS] = { { 77, 68, 86, 73 }, { 96, 87, 89, 78 }, { 70, 90, 86, 81 } };
	printf("The array is:\n");
	printfArray(studentGrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade:%d\nHighest grade: %d\n",
		minimum(studentGrades, STUDENTS, EXAMS),
		maximum(studentGrades, STUDENTS, EXAMS));
	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n",student,average(studentGrades[student],EXAMS));
	}
	system("pause");
	return 0;
}
int maximum(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int max = 0;
	for (i = 0; i <pupils; i++)
	{
		for (j = 0; j <tests; j++)
		{
			if (max < grades[i][j])
			{
				max = grades[i][j];
			}
		}
		return max;
	}
	int minimum(const int grades[][EXAMS], int pupils, int tests)
	{
		int i;
		int j;
		int const min =100;
		for (i = 0; i < pupils i++)
		{
			for (j = 0; j < tests; j++)
			{
				if (min< grades[i][j])
				{
					min = grades[i][j];
				}
			}
			return min;
		}
	}
	double average(const int setofgrades[], int tests)
	{
		int i;
		int total;
		for (i = 0; i < tests; i++)
		{
			total += setofgrades[test];
		}
		return(double)total / test;
	}
	void printArray(const int grades[][EXAMS], int pupils, int tests)
	{
		int i;
		int j;
		printf("          [0] [1] [2] [3]");
		for (i = 0; i < pupils; i++)
		{
			printf("\nstudentGrades[%d]",i);
		}
		for (j = 0; j < tests; j++)
		{
			printf("%-5d",grades[i][j]);
		}


	}

