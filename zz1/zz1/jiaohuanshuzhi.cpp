#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������a=");
	scanf("%d",&a);
	printf("������b=");
	scanf("%d", &b);
	printf("����ǰa=%d b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("������a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}