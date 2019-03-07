/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：辗转相除法求两个非负整数的最大公约数
*程序输出：最大公约数
*/
#include <stdio.h>

int main()
{
	int a, b, r;
	printf("请输入两个正整数：\n");
	scanf("%d %d", &a, &b);
	//如果a<b，交换a和b的值
	if (a < b)
	{
		r = a;
		a = b;
		b = r;
	}

	//辗转相除法，因为r的初始值不为0，所以while语句至少会执行一次
	//直至余数为零，跳出循环
	if (a%b == 0) {
		printf("最大公约数为：%d\n", b);
	}
	else {
		while (r != 0)
		{
			r = a % b;
			a = b;
			b = r;
		}
		//输出最大公约数
		printf("最大公约数为：%d\n", a);
	}


	return 0;
}
