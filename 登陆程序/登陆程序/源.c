#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int zz(){
	printf("**********欢迎进入登陆程序**********");
	printf("**********0 新用户注册**************");
	printf("**********1 老用户登陆**************");
}
void new_user(){
	int arr[7] = { 0 };
	printf("请输入注册的账号（账号为7位数）：");
	scanf("%d", &arr);
	int arr[6] = { 0 };
	printf("请输入密码(密码长度为6位数)：");
	scanf("%d", &arr);
	printf("注册成功");
	old_user();
}
void old_user(){
		int arr[7] = { 0 };
		printf("请输入账号（账号为7位数）：");
		scanf("%d", &arr);
		int arr[6] = { 0 };
		printf("请输入密码(密码长度为6位数)：");
		scanf("%d", &arr);
		if ();
		printf("登陆成功");
	}

void main(){
	zz();
	int input =  0 ;
	printf("请输入数字进行选择：");
	scanf("%d", &input);
	if (input = 0){
		new_user();
	}
	if (input = 1){
		old_user();
	}

}


