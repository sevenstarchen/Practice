/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������������
*������������
*/
#include <stdio.h>
int main() {
	int i, j,t=0,m=0;
	int a[101][101], b[101][101],c[101][101];
	printf("����a��������:");
		scanf("%d", &i);
		printf("����b��������:");
		scanf("%d", &j);
		printf("This is a:\n");
		for (int r = 0; r < i; r++) {
			for (int l = 0; l < j; l++) {
				scanf("%d",&a[r][l]);
			}
		}
		printf("This is b:\n");
		for (int r = 0; r < i; r++) {
			for (int l = 0; l < j; l++) {
				scanf("%d", &b[r][l]);
			}
		}
		for (int r = 0; r < i; r++) {
			for (int t = 0; t < j; t++) {
				for (int l = 0; l < j; l++) {
					m += a[r][l] * b[l][t];
				}
				c[r][t] = m;
				m = 0;
			}
		
			
		}
		for (int r = 0; r < i; r++) {
			for (int l = 0; l < j; l++) {
				printf("%d ", c[r][l]);
				if (l == j - 1) {
					printf("\n");
				}
			}
		}
		return 0;
}