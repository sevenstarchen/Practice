/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/13
*�� �� �ţ�v1.0
*�����������žų˷���
*����������žų˷���	
*/
#include <stdio.h>
#include<math.h>
#include <string.h>

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			printf("%d*%d=%d ", i, j, i*j);
			if (j == 9) {
				printf("\n");
				break;
			}
		}
}
}



