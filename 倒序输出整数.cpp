/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/10
*�� �� �ţ�v1.0
*���������������������
*���������һ�����ĵ���	
*/
#include <stdio.h>
#include<math.h>

int daoxu(int n) {
	do {
		printf("%d", n % 10); //ȡ�࣬������һλ��
		n = n / 10;//ȥ���Ѿ��������һλ
	} while (n != 0);
	return 0;
}

int main() {
	int n;
	printf("input n:");
	scanf("%d", &n);
	daoxu(n);
	}



