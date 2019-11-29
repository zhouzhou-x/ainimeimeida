#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a = 0;//给一个数比如一1 计算1+11+111+1111+11111，每次计算到5位
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
//计算到n位