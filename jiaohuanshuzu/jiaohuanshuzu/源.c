#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int A[10] = {0};
	int B[10] = {0};
	int t[10] = {0};
	printf("����������A(10λ)��");
	for (i = 0; i<10; i++)
	{
		scanf(" %d", &A[i]);
	}
	printf("����������B��10λ����");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &B[i]);
	}
	for (i = 0; i<10; i++)
	{
		t[i] = A[i];
		A[i] = B[i];
		B[i] = t[i];
	}
	printf("���齻����\n");
	printf("����A:");
	for (i = 0; i<10; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("����B:");
	for (i = 0; i<10; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
