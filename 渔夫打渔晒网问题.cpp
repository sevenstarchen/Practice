/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：渔夫打鱼晒网问题
*程序输出：输出某一天是在打鱼还是晒网
*/
#include <stdio.h>
#include<math.h>

int fun1(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
	{
		return 0;
	}
}
int fun2(int year,int month,int day) {
	int f=fun1(year);
	int sum = 0,sumy=0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };    /*数组a存放平年每月的天数*/
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };    /*数组b存放闰年每月的天数*/
	int y = year - 2011;
	for (int i = 2011; i < year; i++) {
		if (f == 1)
			sumy += 366;
		else
			sumy += 355;
	}
	//int m = month - 1;
	int d = day ;
	for (int i = 0; i < month-1; i++) {
		if (f == 1)
			 sum = b[i] + sum;
		else
			 sum = a[i] + sum;
	}
	d += sum;
	sum = d + sumy;
	return sum;
}
int main() {
	int y, m, d;
	printf("请输入年月日：");
	scanf("%d%d%d", &y,&m,&d);
	int sum=fun2(y, m, d);
	if (sum % 5 < 4 && sum % 5 > 0) {
		printf("sum=%d ,在打渔", sum);
	}
	else
		printf("sum=%d ,在晒网", sum);
	
}
/*
实现过程：
(1) 自定义函数 fun1()，用来判断输入的年份是否是闰年。

(2) 自定义函数 fun2()，用来计算输入日期距 2011 年 1 月 1 日共有多少天。
*/