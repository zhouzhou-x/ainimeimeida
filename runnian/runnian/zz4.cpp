#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void zz(){
	int a = 0;
	printf("��������ݣ�");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)//������������Ա�4���������ܱ�100�������ҿ��Ա�400����
	{
		printf("%d������\n",a);
	}
	else {
		printf("%d��������\n", a);
	}
}
void main(){
	zz();
	system("pause");
}


