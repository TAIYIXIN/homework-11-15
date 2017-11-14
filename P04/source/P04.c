#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr[10];
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
	}
	printf("%s%13s\n","Element","Value");
	for (i = 0; i <= 9; i++)
	{
		printf("%7d%13d\n",i,arr[i]);
	}
	system("pause");
	return 0;
	

}