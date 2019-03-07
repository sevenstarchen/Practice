/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：求菲比拉契数列有限项	
*程序输出：斐波那契数列
*/
#include <stdio.h>
#include<stdlib.h>
int main() {
	int a = 1, b = 1;
	int c = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		printf("%d %d ", a, b);
			a = a + b;
		    b = b + a;
	}
	return 0;
}
