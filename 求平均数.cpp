/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：单词个数统计	
*程序输出：单词个数
*/
#include <stdio.h>

int main() {
	int a, b, c, aver;
	printf("请输入3个实型数\n");
	scanf("%d%d%d", &a,&b,&c);
	aver = (a + b + c) / 3;
	printf("zheshi a :%d \n", a);
	printf("zheshi b :%d \n", b);
	printf("zheshi c :%d \n", c);
	printf("zheshi aver :average= %d\n", aver);
	printf("Hello, World!\n");
	return 0;
}
