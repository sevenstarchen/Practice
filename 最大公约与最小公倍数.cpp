/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�������������Լ������С������
*�����������Լ���빫����
*/
#include <stdio.h>
int main()
{
	int a, b, c, m, t;
	printf("������������:\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a * b;
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	printf("���Լ��:%d", b);
	printf("��С������:%d", m / b);
}