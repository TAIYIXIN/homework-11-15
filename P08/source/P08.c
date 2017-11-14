#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int i;
	int j;
	int arr[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	printf("%s%13s%17s\n","Element","value","Histogram");
	for (i = 0; i < SIZE; i++)
	{
		printf("%7d%13d       ",i, arr[i]);
		for (j = 0; j < arr[i]; j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}