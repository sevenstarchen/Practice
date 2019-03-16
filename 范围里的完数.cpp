/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：求一个范围内的完数（因子之和等于本身）
*程序输出：所有完数
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
		int k = 0;					//k在每次循环都要从新赋值为1，要不然K会一直累积
		for (int j = 1; j <= i/2; j++) {	//可以是j<i也可以是现在这个，现在这个遍历次数少些，但结果都一样
			if (i%j == 0) {
				k = k + j;
			}
		}
		if (k == i) {
			printf("%d \n", i);
		}
	}
}




