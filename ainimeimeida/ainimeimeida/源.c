#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a = 0;//��һ��������һ1 ����1+11+111+1111+11111��ÿ�μ��㵽5λ
	int sn = 0;
	int j = 0;
	printf("������һ������");
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
//���㵽nλ