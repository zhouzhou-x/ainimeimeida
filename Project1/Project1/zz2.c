#include <stdio.h>
int main(){
	int i = 1, j = 1, z = 1;
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= i; j++){
			z = i * j;
			printf("%d*%d=%-3d ", i,j,z);
			}

	}
	system("pause");
	return 0;
}