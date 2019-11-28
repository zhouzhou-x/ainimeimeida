#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void zz(){
	int a = 0;
	printf("请输入年份：");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)//闰年的条件可以被4整除但不能被100整除并且可以被400整除
	{
		printf("%d是闰年\n",a);
	}
	else {
		printf("%d不是闰年\n", a);
	}
}
void main(){
	zz();
	system("pause");
}


