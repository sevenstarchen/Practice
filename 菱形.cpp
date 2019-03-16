/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：输出菱形
*程序输出：菱形
*/
//pi/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ……
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	int n;
	printf("input n(must be odd):");
	scanf("%d", &n);
	for (int i = 0; i <= n/2; i++) { //在第n/2行结束
		for (int k = i; k < n / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j <i*2+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n/2; i < n ; i++) { //从第n/2行开始
		for (int k = 0; k <(i-(n/2))+1 ; k++) {
			printf(" ");
		}
		for (int j = 0; j <n-2*((i-n/2)+1); j++) {// i为行数
			printf("*");
		}
		printf("\n");
	}

}




