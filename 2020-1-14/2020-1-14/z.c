#include<stdio.h>
int main(){
	char c = 'a';
	int i = 0;
	for (; i < 26; i++){
		fputc(c + i, stdout);
	}
	system("pause");
	return 0;
}