#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
	printf("******** ��ӭ������������Ϸ ********\n");
	printf("************ 1.play ****************\n");
	printf("************ 0.exit ****************\n");
	printf("********** ����ֻ��3���� ************\n");
}
void game(){//�Ľ������ò����ִ���
	int random_num = rand() % 100 + 1;
	int input = 0;
	int i = 0;
		while(1){
			if (i<3){
				printf("��������µ�����:");
				scanf("%d", &input);
				if (input > random_num){
					printf("�磬���˴���\n");
				}
				else if (input < random_num){
					printf("�磬С��С��\n");
				}
				else{
					printf("�¶���~~~\n");
					break;
				}
			}
			else {
				printf("������˼��ʧȥ��3�λ����������´�����\n");
				break; }
			i+=1;
		}
	}

int main(){
	int input = 0;
	do{
		menu();
		printf("���������ֽ���ѡ��");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������������������룺\n");
			break;
		}

	} while (input);
	return	0;
}