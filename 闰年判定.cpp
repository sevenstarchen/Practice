/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：判断年份是否是闰年
*程序输出：闰年与否
*/
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0)||a%400==0) {
		printf("%d是闰年", a);
	}
	else
		printf("%d不是闰年", a);

	return 0;
}
