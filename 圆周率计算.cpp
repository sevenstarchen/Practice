/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：求圆周率
*程序输出：圆周率
*/
//pi/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ……
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	float pi = 0,i=1;
	float s=1,n=1;
	while (fabs(i)> 1e-6) {
		pi += i;
		n = n + 2;
		s = -s;
		i = s / n;
		//s = 1/i;

	}
			printf("%.6f\n",pi);
}




