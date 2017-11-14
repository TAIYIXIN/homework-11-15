#include<stdio.h>
#include<stdlib.h>
#define SIZE 12
int main(void)
{
	int i;
	int total=0;
	int arr[SIZE] ={ 1, 3, 5, 4, 7, 2, 99, 16,45, 67, 89, 45 };

	for (i = 0; i < SIZE; i++)
	{
		total += arr[i];
	}
	printf("Toatal of arr element value is %d\n",total);

	system("pause");
	return 0;
}