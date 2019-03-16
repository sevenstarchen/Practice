/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：矩阵转置问题
*程序输出：转置后的矩阵
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
