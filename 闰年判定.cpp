/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������ж�����Ƿ�������
*����������������
*/
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0)||a%400==0) {
		printf("%d������", a);
	}
	else
		printf("%d��������", a);

	return 0;
}
