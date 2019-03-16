/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/10
*版 本 号：v1.0
*问题描述：等腰三角形问题
*程序输出：等腰三角形形状
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


