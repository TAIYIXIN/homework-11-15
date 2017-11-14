#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int i;
	int arr[SIZE];
	for (i = 0; i <SIZE; i++)
	{
		arr[i]=i*2+2;
	}
	printf("%s%13s\n","Element","value");
	for (i = 0; i <= 9; i++)
	{
		printf("%7d%13d\n",i,arr[i]);

	}
	system("pause");

}