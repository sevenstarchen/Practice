/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*������������Ʊ���������������	
*���������쳲���������
*/
#include <stdio.h>
#include<stdlib.h>
int main() {
	int a = 1, b = 1;
	int c = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		printf("%d %d ", a, b);
			a = a + b;
		    b = b + a;
	}
	return 0;
}
