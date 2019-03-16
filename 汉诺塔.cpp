/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/12
*版 本 号：v1.0
*问题描述：汉诺塔问题
*程序输出：移动的步骤	
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
void swap(int x, int y,char color[]) {
	char temp;
	temp = color[x];
	color[x] = color[y]; 
	color[y] = temp; 
}

void move(char a,char b,char c,int n) {
	if (n == 1) {
		printf("%c-->%c\n", a, c);
	}
	else {
		move(a, c, b, n - 1);
		printf("%c-->%c\n", a, c);
		move(b, a, c, n - 1);
		
	}
}
int main() {
	int n;
	printf("input n:");
	scanf("%d", &n);
	move('a',' b', 'c', n);
}



