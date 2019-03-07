/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：求两个非负整数的最大公倍数数
*程序输出：最大公倍数
*/
#include <stdio.h>

int main()
{
	char a, b;
	printf("输入一个字母:");
	a = getchar();
	if (a < 97) {
		b = a + 32;
	}
	else
		b = a - 32;
	printf("%c",b);




	return 0;
}
