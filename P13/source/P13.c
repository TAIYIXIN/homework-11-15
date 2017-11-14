#include<stdio.h>
#include<stdlib.h>
int printfarray(int a[][3]);
int main(void)
{
	int arr1[2][3] = { { 1,  2,  3 }, { 4,  5,  6 } };
	int arr2[2][3] = { 1,  2,  3,  4,  5 };
	int arr3[2][3] = {{ 1,  2 },{  4 }};
	printf("Value in arr1 by row are:\n");
	printfarray(arr1);
	printf("Value in arr2 by row are:\n");
	printfarray(arr2);
	printf("Value in arr3 by row are:\n");
	printfarray(arr3);
	system("pause");
	return 0;
}
int printfarray(int a[][3])
{
	int i;
	int j;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return a[i][j];
}