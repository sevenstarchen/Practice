/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*��������������ת������
*���������ת�ú�ľ���
*/
#include <stdio.h>
#include<math.h>


int main() {
	int a[101][101] , b[101][101],t;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[j][i] = a[i][j];

		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", b[i][j]);
			if (j == 2)
				printf("\n");

		}
	}
	
}
