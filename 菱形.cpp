/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/13
*�� �� �ţ�v1.0
*�����������������
*�������������
*/
//pi/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ����
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	int n;
	printf("input n(must be odd):");
	scanf("%d", &n);
	for (int i = 0; i <= n/2; i++) { //�ڵ�n/2�н���
		for (int k = i; k < n / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j <i*2+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n/2; i < n ; i++) { //�ӵ�n/2�п�ʼ
		for (int k = 0; k <(i-(n/2))+1 ; k++) {
			printf(" ");
		}
		for (int j = 0; j <n-2*((i-n/2)+1); j++) {// iΪ����
			printf("*");
		}
		printf("\n");
	}

}




