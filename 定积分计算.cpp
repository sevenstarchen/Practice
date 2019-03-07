/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：定积分	
*程序输出：结果
*/
#include <stdio.h>
#include <math.h>
float fun(float a) {
	float y;
	//y = a * a*a + a*a + 2;
	y = sin(a);
	return y;
}
float juxing(float a, float b,int n) {
	float s=0;
	float h = (b - a) / n;
	s = (fun(a) + fun(a+h))*h*0.5;
	printf("这是第一个S：%f", s);
	for (int i = 1; i < n; i++) {
		s =s+ ((fun(a + i * h) + fun(a + (i + 1)*h))*h*0.5);
	}
	return s;
}
int main() {
	int a, b;
	printf("请输入上下限:");
	scanf("%d%d", &a,&b);
	float s = juxing(a, b, 1000);
	printf("定积分结果为:%f ",s);
	return 0;
}
