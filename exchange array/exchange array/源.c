#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i = 0;
int arr1[10] = { 0 };
int arr2[10] = { 0 };
int arr3[10] = { 0 };
void main(){
	printf("请输入数组1:");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr1);
	}
	printf("请输入数组2：");
	for (int j = 0; j < 10; j++){
		scanf("%d", &arr2);
	}
	for (int z = 0; z < 10; z++){
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	printf("交换后：\n");
	for (i = 0; i < 10; i++)
		printf("%d ", &arr1[i]);
	printf("%d\n");
	for (i = 0; i < 10; i++)
		printf("%d ", &arr2[i]);

	system("pause");
	return 0;
}