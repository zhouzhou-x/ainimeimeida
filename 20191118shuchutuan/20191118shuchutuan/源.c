#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n = 0;
	printf("����������Ҫ������һ�룺");
	scanf("%d", &n);
	int	i = 0;
	int j = 0;
	int	a = 1;
	for (i = 1; i < n; i++){
		a = 2 * i - 1;//������ڼ��еĹ�ϵ
		for (j = 0; j<n - i; j++){//�ո������ǵĹ�ϵ
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
//putchar��ӡ�����ַ�����
//#if 0/1
//#eles
//#endif
//3λ���������