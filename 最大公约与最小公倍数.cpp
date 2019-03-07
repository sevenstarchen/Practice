/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：最大公约数和最小公倍数
*程序输出：公约数与公倍数
*/
#include <stdio.h>
int main()
{
	int a, b, c, m, t;
	printf("请输入两个数:\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a * b;
	c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	printf("最大公约数:%d", b);
	printf("最小公倍数:%d", m / b);
}