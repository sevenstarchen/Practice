/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������ٷ��Ƴɼ���ȼ��Ƴɼ�����ת�� 
*����������ȼ��Ƴɼ�
*/
#include <stdio.h>

int main()
{
	int a;
	char b;
	scanf("%d", &a);
	if (a < 20) {
		b = 'D';
	}
	else if (a < 40)
		b = 'C';
	else if (a < 60)
		b = 'B';

	printf("%c", b);
}
