#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leftRoundEasy(char * begin, char * end)
{
	char tmp;

	for (; begin < end; begin++, end--)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
	}
}

int main()
{
	char src[] = "ABCDEFG";

	leftRoundEasy(src, 1);

	puts(src);
	system("pause");
	return 0;
}