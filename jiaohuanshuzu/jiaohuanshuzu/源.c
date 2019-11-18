#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int A[10];
	for (i = 0; i<10; i++)
	{
		printf(" %d", A[i]);
	}
	int B[10];
	int t[10]
	printf("请输入数组A：");
	for (i = 0; i<10; i++)
	{
		scanf(" %d", &A[i]);
	}
	printf("请输入数组B：");
	for (i = 0; i<10; i++)
	{
		scanf(" %d", &B[i]);
	}
	for (i = 0; i<10; i++)
	{
		t[i] = A[i];
		A[i] = B[i];
		B[i] = t[i];
	}
	for (i = 0; i<10; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	for (i = 0; i<10; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
