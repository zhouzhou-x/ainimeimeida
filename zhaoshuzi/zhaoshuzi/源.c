#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binaryFind(int arr[],int n,int t){
	int right = n-1;
	int left = 0;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (t < arr[mid]){
			right = mid-1;
		}
		else if (t > arr[mid]){
			left = mid+1;
 		}
		else{
			break;
		}
	}
	if (left <= right)
		return mid;
	else
		return -1;
	}
void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("找到了下标是：%d\n",binaryFind(arr, 10, 11));
	system("pause");


}