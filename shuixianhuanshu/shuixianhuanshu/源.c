#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a = 0;
	int i = 0;
	int j = 0;
	int z = 0;
	printf("������һ����(3λ������)��");
	scanf("%d/n", &a);
	i = a / 100;
	j = a % 100 / 10;
	z = a % 10;
	if (a == i*i*i + j*j*j + z*z*z){
		printf("����һ��ˮ�ɻ���\n");
	}
	else{
		printf("�ⲻ��һ��ˮ�ɻ���\n");
	}
	system("pause");
	return	0;

}


