/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/13
*�� �� �ţ�v1.0
*������������һ����Χ�ڵ�����������֮�͵��ڱ���
*�����������������
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	printf("input max:");
	int n;
	scanf("%d", &n);
	int i = 6;
	for (int i = 2; i <= n; i++) {
		int k = 0;					//k��ÿ��ѭ����Ҫ���¸�ֵΪ1��Ҫ��ȻK��һֱ�ۻ�
		for (int j = 1; j <= i/2; j++) {	//������j<iҲ��������������������������������Щ���������һ��
			if (i%j == 0) {
				k = k + j;
			}
		}
		if (k == i) {
			printf("%d \n", i);
		}
	}
}




