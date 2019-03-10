/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/10
*版 本 号：v1.0
*问题描述：猴子吃桃问题
*程序输出：猴子摘桃数量
*/
#include <stdio.h>
#include<math.h>

int main() {
	int sum=0,leave=1,day=9;
	while (day != 0) {
		leave = (leave + 1) * 2; //上一天剩余桃子的总数；
		printf("sum=%d ", leave);
		printf("day=%d \n", day);
		day--;
		
	}
	printf("sum=%d", leave);
}