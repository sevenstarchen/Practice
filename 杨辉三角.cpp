/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/13
*�� �� �ţ�v1.0
*�������������������
*����������������ͼ��
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	printf("input n:");
	int a[14][14];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { //i������
		a[i][0] = a[i][i] = 1;
	}
	for (int i = 2; i < n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - i; k++)
			printf("   ");//�����ո�
		for (int j = 0; j <= i; j++) {
			printf("%6d", a[i][j]);//ռ��λ��������λ��ȫ��λ
			if (j == i)
			printf("\n");
		}
		
	}
}




