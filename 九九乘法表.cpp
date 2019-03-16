/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：九九乘法表
*程序输出：九九乘法表	
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



