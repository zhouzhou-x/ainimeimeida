#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int a = 0;
int i = 0;
//void zz(){
//	for (i = 0; i <= a; i++){
//		if (a%i != 0){
//			continue;
//		}
//		else{
//			printf("�������������");
//			break;
//		}
//	}
//	if (i == a){
//		printf("����һ������");
//	}
//}
void main(){
	printf("������һ������");
	scanf("%d", &a);
	for (i = 2; i < a; i++){
		if (a%i != 0){
			continue;
		}
		else if(a%i == 0){  
			printf("�������������\n");
			break;
		}
	}
	if (i == a){
		printf("����һ������\n");
	}
	system("pause");
	return 0;
}
