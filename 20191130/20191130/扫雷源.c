#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max_row 3
#define Max_col 3
void menu(){
	printf("-----------------------------------\n");
	printf("--------欢迎来到三子棋游戏---------\n");
	printf("------------1 开始游戏-------------\n");
	printf("------------0 退出游戏-------------\n");
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
	printf("玩家落子!\n");
	while (1){
		printf("请输入你要下的的坐标：");
		scanf("%d %d", &a, &b);
		if (a<0 && a>2 && b<0 && b>2){
			printf("请重新输入坐标");
			continue;
		}
		if (checkerboard[Max_col][Max_row] != " "){
			checkerboard[a][b] = "X";
			break;
		}
		else {
			printf("此处已经有棋子了，请重新输入");
				continue;
		}
	}
}
void computer(char checkerboard[Max_col][Max_row]){
	srand(time(0));//stand((unsigned int)time(NULL))
	printf("电脑落子!\n");
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
	//检查所有行
	for (i; i < Max_row; i++){
		if (checkerboard[Max_row][0] != " "
			&& checkerboard[Max_row][0] == checkerboard[Max_row][1]
			&& checkerboard[Max_row][1] == checkerboard[Max_row][2]){
			return checkerboard[Max_row][0];
			}
	}
	//检查所有列
	for (i=0; i < Max_col; i++){
		if (checkerboard[0][Max_col] != " "
			&& checkerboard[0][Max_col] == checkerboard[1][Max_col]
			&& checkerboard[1][1] == checkerboard[2][Max_col]){
			return checkerboard[Max_col][0];
		}
	}
	//检查对角线
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
	//创建棋盘
	char checkerboard[Max_col][Max_row];
	//初始化棋盘
	init_checkerboard(checkerboard);
	while (1){
		//打印棋盘
		pfcheckerboard(checkerboard);
		//玩家落子
		player(checkerboard[Max_col][Max_row]);
		//判断输赢
		winner = win(checkerboard);
		if (winner != " "){
			break;
		}
		//电脑落子
		computer(checkerboard);
		//判断输赢
		winner = win(checkerboard);
		if (winner != " "){
			break;
		}
	}
	if (winner == "X"){
		printf("赢了");
	}
	else if (winner == "O"){
		printf("输了");
	}
	else{
		printf("平");
	}
}
void main(){
	menu();
	int choose = 0;
	printf("请你进行选择:");
	scanf("%d", &choose);
	if (choose = 0){
		printf("拜拜");
	}
	else if(choose = 1){
		game();
	}
	else{
		printf("您输入的有误，请重新输入");
	}
	system("pause");
	return 0;
}