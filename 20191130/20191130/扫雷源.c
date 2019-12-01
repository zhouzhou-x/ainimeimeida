#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max_row 3
#define Max_col 3
void menu(){
	printf("-----------------------------------\n");
	printf("--------��ӭ������������Ϸ---------\n");
	printf("------------1 ��ʼ��Ϸ-------------\n");
	printf("------------0 �˳���Ϸ-------------\n");
	printf("-----------------------------------\n");
}
void pfcheckerboard(char checkerboard[Max_row][Max_col]){
	int i = 0;
	int j = 0;
	for (i; i < Max_row; i++){
		printf("+---+---+---+\n");
		for (j = 0; j < Max_col+1; j++){
			printf("|   ");
		}
		printf("\n");
	}
	printf("+---+---+---+\n");
}
void init_checkerboard(char checkerboard[Max_row][Max_col]){
	int i = 0;
	int j = 0;
	for (i; i < Max_row; i++){
		for (j = 0; j < Max_col + 1; j++){
			checkerboard[Max_row][Max_col] = " ";
		}
	}
}
void player(char checkerboard[Max_col][Max_row]){
	int a = 0;
	int b = 0;
	printf("�������!\n");
	while (1){
		printf("��������Ҫ�µĵ����꣺");
		scanf("%d %d", &a, &b);
		if (a<0 && a>2 && b<0 && b>2){
			printf("��������������");
			continue;
		}
		if (checkerboard[Max_col][Max_row] != " "){
			checkerboard[a][b] = "X";
			break;
		}
		else {
			printf("�˴��Ѿ��������ˣ�����������");
				continue;
		}
	}
}
void computer(char checkerboard[Max_col][Max_row]){
	srand(time(0));//stand((unsigned int)time(NULL))
	printf("��������!\n");
	while (1){
		int random_col = rand() % 3;
		int random_row = rand() % 3;
		if (checkerboard[random_col][random_col] != " "&&checkerboard[random_col][random_col] != "X"){
			checkerboard[random_col][random_col] = "O";
			break;
		}
		else {
			continue;
		}
	}

}
char win(char checkerboard[Max_col][Max_row]){
	int i = 0;
	//���������
	for (i; i < Max_row; i++){
		if (checkerboard[Max_row][0] != " "
			&& checkerboard[Max_row][0] == checkerboard[Max_row][1]
			&& checkerboard[Max_row][1] == checkerboard[Max_row][2]){
			return checkerboard[Max_row][0];
			}
	}
	//���������
	for (i=0; i < Max_col; i++){
		if (checkerboard[0][Max_col] != " "
			&& checkerboard[0][Max_col] == checkerboard[1][Max_col]
			&& checkerboard[1][1] == checkerboard[2][Max_col]){
			return checkerboard[Max_col][0];
		}
	}
	//���Խ���
	if (checkerboard[0][0] != " "
		&& checkerboard[0][0] == checkerboard[1][1]
		&& checkerboard[1][1] == checkerboard[2][2]){
		return checkerboard[0][0];
		}
	if (checkerboard[0][2] != " "
		&& checkerboard[0][2] == checkerboard[1][1]
		&& checkerboard[1][1] == checkerboard[2][1]){
		return checkerboard[0][2];
		}
}
void game(){
	char winner;
	//��������
	char checkerboard[Max_col][Max_row];
	//��ʼ������
	init_checkerboard(checkerboard);
	while (1){
		//��ӡ����
		pfcheckerboard(checkerboard);
		//�������
		player(checkerboard[Max_col][Max_row]);
		//�ж���Ӯ
		winner = win(checkerboard);
		if (winner != " "){
			break;
		}
		//��������
		computer(checkerboard);
		//�ж���Ӯ
		winner = win(checkerboard);
		if (winner != " "){
			break;
		}
	}
	if (winner == "X"){
		printf("Ӯ��");
	}
	else if (winner == "O"){
		printf("����");
	}
	else{
		printf("ƽ");
	}
}
void main(){
	menu();
	int choose = 0;
	printf("�������ѡ��:");
	scanf("%d", &choose);
	if (choose = 0){
		printf("�ݰ�");
	}
	else if(choose = 1){
		game();
	}
	else{
		printf("���������������������");
	}
	system("pause");
	return 0;
}