#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	int a[] = {0,1,2,3,4,6,7,8,9,10};
	int b = 0;
	int left = 0;
	int mid = 0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d",&b);
	int right = sizeof(a) / sizeof(a[0])-1;
	while (left <= right){
		mid = (left + right) / 2;
		if (b < a[mid]){
			right = mid-1;
		}
		else if (b > a[mid]){
			left = mid+1;
 		}
		else{
			break;
		}
	}
	if (left <= right)
		printf("�ҵ���,�±���%d\n", mid);
	else
		printf("�Ҳ���\n");
	system("pause");
	return 0;
	}
	
