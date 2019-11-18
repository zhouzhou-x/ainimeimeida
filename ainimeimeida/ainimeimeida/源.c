#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a = 0;
	int sn = 0;
	int j = 0;
	printf("请输入一个数：");
	scanf("%d/n", &a);
	j = a;
	for (int i = 0; i < 5; i++){
		sn += a;
		a = a * 10 + j;
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}