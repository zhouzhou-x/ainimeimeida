#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	while (1){
		ch = getchar();	//getchar�Ӽ��̽���һ���ַ�
		if (isalpha(ch)){
			putchar(ch ^ 32);
		}
		else if (isdigit(ch)){

		}
		else {
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}
