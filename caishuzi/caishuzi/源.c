#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
	printf("******** 欢迎来到猜数字游戏 ********\n");
	printf("************ 1.play ****************\n");
	printf("************ 0.exit ****************\n");
	printf("********** 机会只有3次呦 ************\n");
}
void game(){//改进版设置猜数字次数
	int random_num = rand() % 100 + 1;
	int input = 0;
	int i = 0;
		while(1){
			if (i<3){
				printf("请输入你猜的数字:");
				scanf("%d", &input);
				if (input > random_num){
					printf("哥，大了大了\n");
				}
				else if (input < random_num){
					printf("哥，小了小了\n");
				}
				else{
					printf("猜对了~~~\n");
					break;
				}
			}
			else {
				printf("不好意思你失去了3次机会啦，请下次再玩\n");
				break; }
			i+=1;
		}
	}

int main(){
	int input = 0;
	do{
		menu();
		printf("请输入数字进行选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入的数字有误请重新输入：\n");
			break;
		}

	} while (input);
	return	0;
}