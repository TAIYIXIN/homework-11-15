#include<stdio.h>
#include<stdlib.h>
void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	printf("First call to each Function\n");
		staticArrayInit();
	automaticArrayInit();
	printf("\n\nSecend call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}
void staticArrayInit(void)
{
	int i;
	static int arr1[3];
	printf("\nvalues on entering staticArrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d  ",i,arr1[i]);
	}
	printf("\nValues on exiting staticArrayInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d  ", i, arr1[i]+=5);
	}
}
void automaticArrayInit(void)
{
	int i;
	 int arr2[3] = {1,2,3};
	printf("\n\nvalues on entering automicArrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d  ", i, arr2[i]);
	}
	printf("\nValues on exiting automicArrayInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d  ", i, arr2[i] += 5);
	}

}
