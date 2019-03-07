/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：百分制成绩与等级制成绩互相转换 
*程序输出：等级制成绩
*/
#include <stdio.h>

int main()
{
	int a;
	char b;
	scanf("%d", &a);
	if (a < 20) {
		b = 'D';
	}
	else if (a < 40)
		b = 'C';
	else if (a < 60)
		b = 'B';

	printf("%c", b);
}
