/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：判别键盘输入字符的类别	
*程序输出：字符类型
*/
#include <stdio.h>
void main() {
	int a;
	a = getchar();
	if (a >= 48 && a <= 57)
		printf("是数字");
	else if ((a >= 65 && a <= 90) || (a <= 122 && a >= 97))
		printf("是字母");
	else if (a == 32)
		printf("是空格");

}
