#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a = 0;
	int i = 0;
	int j = 0;
	int z = 0;
	printf("请输入一个数(4位数以下3位数以上)：");
	scanf("%d/n", &a);
	i = a / 100;
	j = a / 10 % 10;
	z = a % 10;
	if (a == i*i*i + j*j*j + z*z*z){
		printf("这是一个水仙花数\n");
	}
	else{
		printf("这不是一个水仙花数\n");
	}
	system("pause");
	return	0;

}//pow函数（2，3）3是多少次方
//写一个回文数函数
//数位遍历：1.去除输出的每一位 2.进制转化
//写阿姆啥啥数


