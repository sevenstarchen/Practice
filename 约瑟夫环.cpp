/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/10
*�� �� �ţ�v1.0
*����������Լɪ������
*���������������������˱��
*/
#include <stdio.h>
#include<math.h>


int main() {
	int n,max;
	int a[100];
	printf("input n,max:");
	scanf("%d%d",&n,&max);
	for (int i = 0; i < n; i++) {
		a[i] = 1;
	}
	int i = 0, j = 1;
	int all = n;
	while (n > 0) {
		if (i > n) {
			i = i % all;
		}
		if (a[i] != 0) {
			if (j == max) {
				printf("%d ", i + 1);
				a[i] = 0;
				j = 1;
				i++;
				n--;
			}
			else
			{
				i++;
				j++;
			}
		}
		else
		{
			i++;
		}

	}
	return 0;
	}



