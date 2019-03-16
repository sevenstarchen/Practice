/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/16
*版 本 号：v1.0
*问题描述：求一个范围内的勾股数
*程序输出：范围内所有勾股数
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 0; a < 100; a++) {
		for (b = a + 1; b < 100; b++) {
			c = (int)sqrt(a*a + b * b);
			if (c*c == a * a + b * b&&a + b > c&&a + c > b&&b + c > a&&c<100) {
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	printf("\n");

	return 0;
}




