#include <stdio.h>
void main(){
	int	i = 0;
	int	a = 1;
	for (i = 1; i<8; i++){
		a = 2 * i - 1;
		for (; a>0; a--){
		printf("*" );
		}printf("\n");
	}
	for (i = 8; i>0; i--){
		a = 2 * i - 1;
		for (; a>0; a--){
			printf("*");
		}printf("\n");
	}
	system("pause");
	return	0;
}//putchar打印单个字符更快
//#if 0/1
//#eles
//#endif
//3位运算符？：