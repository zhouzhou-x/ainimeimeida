#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a = 0;
	printf("请输入你需要的最大数字乘法表：");
	scanf("%d", &a);
	int i = 1, j = 1, z = 1;
	for (i = 1; i <= a; i++){
		for (j = 1; j <= i; j++){
			z = i * j;
			printf("%d*%d=%-3d ", i, j, z);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}