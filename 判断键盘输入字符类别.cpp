/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������б���������ַ������	
*����������ַ�����
*/
#include <stdio.h>
void main() {
	int a;
	a = getchar();
	if (a >= 48 && a <= 57)
		printf("������");
	else if ((a >= 65 && a <= 90) || (a <= 122 && a >= 97))
		printf("����ĸ");
	else if (a == 32)
		printf("�ǿո�");

}
