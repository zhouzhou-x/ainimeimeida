#include <stdio.h>

void main(){
	int count = 0;
	int i = 0;
	for (i = 0; i < 100; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10 == 9){
			count++;
		}
	}printf("%d", count);
	system("pause");
	return 0;

	

}