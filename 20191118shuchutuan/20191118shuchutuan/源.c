#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n = 0;
	printf("请输入你需要行数的一半：");
	scanf("%d", &n);
	int	i = 0;
	int j = 0;
	int	a = 1;
	for (i = 1; i < n; i++){
		a = 2 * i - 1;//星星与第几行的关系
		for (j = 0; j<n - i; j++){//空格与星星的关系
			putchar(' ');
		}
		for (j = 0; j<a; j++){
			printf("*");
		}printf("\n");
	}
	for (i = n; i>0; i--){
			a = 2 * i - 1;
			for (j = 0; j<n - i; j++){
			putchar(' ');
			}
			for (j = 0; j<a; j++){
			printf("*");
			}
			printf("\n");
		}
	system("pause");
	return	0;
	}	
//putchar打印单个字符更快
//#if 0/1
//#eles
//#endif
//3位运算符？：