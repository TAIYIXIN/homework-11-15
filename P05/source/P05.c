#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int arr[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	for (i = 0; i <= 9; i++)
	{
		arr[i];
	}
	printf("%s%13s\n", "Element", "value");
	for (i = 0; i <= 9; i++)
	{
		
		printf("%7d%13d\n",i,arr[i]);
	}
	system("pause");
	return 0;
}