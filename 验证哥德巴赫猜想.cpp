/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：验证哥德巴赫猜想	
*程序输出：两个素数
*/
#include <stdio.h>
#include <math.h>
int sushu(int x) {
	int i;
	for (i = 2; i <= sqrt(x); i++) {
		if (x%i == 0)
		break;
	}
	if (i > sqrt(x))
		return 1;
	else
		return 0;
}
int main() {
	int x;
	scanf("%d", &x);
	for (int i = 2; i < x; i++) {
		if (sushu(i) == 1 && sushu(x - i) == 1) {
			printf("%d=%d+%d\n", x, i, x - i);
			break;
		}
	}
		return 0;
}
