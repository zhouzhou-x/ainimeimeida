#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int a = 0;
int i = 0;
void zz(){
	for (i = 2; i < a; i++){
		if (a%i != 0){
			continue;
		}
		else if (a%i == 0){
			printf("这个数不是素数\n");
			break;
		}
	}
	if (i == a){
		printf("这是一个素数\n");
	}
}
void main(){
	printf("请输入一个数：");
	scanf("%d", &a);
	zz();
	system("pause");
	return 0;
}
