/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/16
*版 本 号：v1.0
*问题描述：求一个范围内的自守数
*程序输出：范围内所有自守数
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
#include<stdio.h>
int main()
{
	long mul, number, k, a, b; //mul部分积；number当前数字；k是number的位数；
	int i;
	printf("It exists following automorphic nmbers small than 100000:\n");
	for (number = 0; number < 100000; number++)
	{
		for (mul = number, k = 1; (mul /= 10) > 0; k *= 10);//这里是单独的一句for循环，不涉及到下面，切记
		/*由number的位数确定截取数字进行乘法时的系数k*/
		a = k * 10;  /*a为截取部分积时的系数*/
		mul = 0;  /*积的最后n位*/
		b = 10;  /*b为截取乘数相应位时的系数*/
		//printf("%d %d %d :\n", k, a, b);
		while (k > 0)
		{
			//printf("%d %d %d :", k, a, b);
			mul = (mul + (number % (k * 10))*(number%b - number % (b / 10))) % a;
			//printf("%d %d %d %d\n", number % (k * 10), number%b,number % (b / 10),mul);//number % (b / 10)是取余取余！！！
			/*(部分积+截取被乘数的后N位*截取乘数的第M位)，%a再截取部分积*/
			k /= 10;  /*k为截取被乘数时的系数*/
			b *= 10;
		}
		if (number == mul)  /*判定若为自守数则输出*/
			printf("%ld   ", number);
	}
	printf("\n");

	return 0;
}




