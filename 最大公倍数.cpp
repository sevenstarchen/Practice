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
	int a, b, r,i;
	printf("请输入两个正整数：\n");
	scanf("%d %d", &a, &b);
	//如果a<b，交换a和b的值
	if (a < b)
	{
		r = a;
		a = b;
		b = r;
	}
	for (i = 1; i > 0; i++) {
		if (i%a == 0 && i%b == 0) {

			//输出最大公倍数
			printf("最大公倍数为：%d\n", a);
			break;
		}
	}




	return 0;
}
