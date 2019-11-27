#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i = 0;
int j = 0;
int z = 0;
int arr1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int arr2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int arr3[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
void main(){
	printf("请输入数组1:");
	for (i = 0; i < 10; i++){
		scanf("%d",&arr1[i]);
	}
	printf("请输入数组2:");
	for (j = 0; j < 10; j++){
		scanf("%d",&arr2[j]);
	}
	for (z = 0; z < 10; z++){
		arr3[z] = arr1[z];
		arr1[z] = arr2[z];
		arr2[z] = arr3[z];
	}
	printf("交换后:\n");
	for (i = 0; i < 10; i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}