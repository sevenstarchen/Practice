/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/10
*版 本 号：v1.0
*问题描述：倒序输出整数
*程序输出：一个数的倒叙	
*/
#include <stdio.h>
#include<math.h>

int daoxu(int n) {
	do {
		printf("%d", n % 10); //取余，输出最后一位数
		n = n / 10;//去掉已经输出的那一位
	} while (n != 0);
	return 0;
}

int main() {
	int n;
	printf("input n:");
	scanf("%d", &n);
	daoxu(n);
	}



