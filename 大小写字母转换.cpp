/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������������Ǹ���������󹫱�����
*�����������󹫱���
*/
#include <stdio.h>

int main()
{
	char a, b;
	printf("����һ����ĸ:");
	a = getchar();
	if (a < 97) {
		b = a + 32;
	}
	else
		b = a - 32;
	printf("%c",b);




	return 0;
}
