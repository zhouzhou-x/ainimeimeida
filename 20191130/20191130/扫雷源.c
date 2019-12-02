#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max_row 3
#define Max_col 3
void zz(){
	printf("-----------------------------------\n");
	printf("------------1 ����һ��-------------\n");
	printf("------------0 �˳���Ϸ-------------\n");
	printf("-----------------------------------\n");
}
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
	printf("+---+---+---+\n");
	for (i; i < Max_row; i++){
		for (j = 0; j < Max_col; j++){
			printf("| %c ", checkerboard[i][j]);
		}
		printf("|\n+---+---+---+\n");
	} 
}
void init_checkerboard(char checkerboard[Max_row][Max_col]){
	int i = 0;
	int j = 0;
	for (i=0; i < Max_row; i++){
		for (j = 0; j < Max_col; j++){
			checkerboard[i][j] = ' ';
		}
	}
	srand((unsigned int)time(0));
}
void player(char checkerboard[Max_row][Max_col]){
	printf("�������!\n");
	while (1){
		int a = 0;
		int b = 0;
		printf("��������Ҫ�µĵ����꣺");
		scanf("%d %d",&a,&b);
		if (a<0 || a >= Max_row || b<0 || b >= Max_col){
			printf("�����������\n");
			continue;
		}
		if (checkerboard[a][b] != ' '){
			printf("��λ���Ѿ�������\n");
			continue;
		}
		checkerboard[a][b] = 'X';
		break;
	}
}
void computer(char checkerboard[Max_row][Max_col]){
	printf("��������!\n");
	while (1){
		int random_row = rand() % Max_row;
		int random_col = rand() % Max_col;
		if (checkerboard[random_row][random_col] != ' '){
			continue;
		}
		else {
			checkerboard[random_row][random_col] = 'O';
			break;
		}
	}

}
char win(char checkerboard[Max_row][Max_col]){
	int i = 0;
	int j = 0;
	//���������
	for (i=0; i < Max_row; i++){
		if (checkerboard[i][0] != ' '
			&& checkerboard[i][0] == checkerboard[i][1]
			&& checkerboard[i][0] == checkerboard[i][2]){
			return checkerboard[i][0];
			}
	}
	//���������
	for (j=0; j < Max_col; j++){
		if (checkerboard[0][j] != ' '
			&& checkerboard[0][j] == checkerboard[1][j]
			&& checkerboard[0][j] == checkerboard[2][j]){
			return checkerboard[0][j];
		}
	}
	//���Խ���
	if (checkerboard[0][0] != ' '
		&& checkerboard[0][0] == checkerboard[1][1]
		&& checkerboard[0][0] == checkerboard[2][2]){
		return checkerboard[0][0];
		}
	if (checkerboard[0][2] != ' '
		&& checkerboard[0][2] == checkerboard[1][1]
		&& checkerboard[0][2] == checkerboard[2][0]){
		return checkerboard[0][2];
		}
	if (draw(checkerboard)){
		return 'Q';
	}
	return ' ';
}
int draw(char checkerboard[Max_row][Max_col]){
	int i = 0;
	int j = 0;
	for (i; i < Max_row; i++){
		for (j = 0; j < Max_col + 1; j++){
			if (checkerboard[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}

void game(){
	char winner = ' ';
	//�������� 
	char checkerboard[Max_row][Max_col];
	//��ʼ������
	init_checkerboard(checkerboard);
	while (1){
		//��ӡ����
		pfcheckerboard(checkerboard);
		//�������
		player(checkerboard);
		//�ж���Ӯ
		winner = win(checkerboard);
		if (winner != ' '){
			break;
		}
		//��������
		computer(checkerboard);
		//�ж���Ӯ
		winner = win(checkerboard);
		if (winner != ' '){
			break;
		}
	}
	if (winner == 'X'){
		pfcheckerboard(checkerboard);
		printf("��ϲ����Ӯ��\n");
	}
	else if (winner == 'O'){
		pfcheckerboard(checkerboard);
		printf("�����໣��������\n");
	}
	else if (winner == 'Q'){
		pfcheckerboard(checkerboard);
		printf("�㾹Ȼ�͵���55��\n");
	}
}
void main(){
	menu();
	while (1){
		int choose = 0;
		printf("�������ѡ��:");
		scanf("%d", &choose);
		if (choose == 0){
			printf("�ݰ�\n");
			break;
		}
		else if (choose == 1){
			game();
			zz();
			int z = 0;
			printf("�������ѡ��:");
			scanf("%d", &z);
			if (z == 0){
				printf("�ݰ�\n");
				break;
			}
			else if (z == 1){
				game();
			}
		}
		else{
			printf("���������������������\n");
			continue;
		}
	}
	system("pause");
	return 0;
}