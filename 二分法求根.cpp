/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：二分法求根
*程序输出：近似值
*/
#include <stdio.h>
#include<math.h>
int fun(float x) {
	float y;
	y = 2 * x*x*x - 4 * x*x + 3 * x - 6;
	return y;
}
int main() {
	float x1=0, x2=0,yl,yr,ym,mid;
	printf("输入两个数，满足F(a)*F(b)<0:");
	scanf("%f%f", &x1, &x2);
	do {
		yl = fun(x1);
		yr = fun(x2);
		mid = (x1 + x2) / 2;
		ym = fun(mid);
		if (yl*ym > 0)
			x1 = mid;
		else if (yl*ym < 0)
			x2 = mid;
		else
			break;
	} while (ym > 1e-5);
	printf("根就是%f", mid);
		return 0;
}