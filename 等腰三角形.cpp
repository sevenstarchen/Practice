/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/10
*�� �� �ţ�v1.0
*������������������������
*���������������������״
*/
#include <stdio.h>
#include<math.h>


int main() {
	int n;
	printf("input n:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");

	}

}


