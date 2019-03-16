/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：杨辉三角形
*程序输出：杨辉三角图形
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	printf("input n:");
	int a[14][14];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { //i是行数
		a[i][0] = a[i][i] = 1;
	}
	for (int i = 2; i < n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - i; k++)
			printf("   ");//三个空格
		for (int j = 0; j <= i; j++) {
			printf("%6d", a[i][j]);//占六位，不够六位补全六位
			if (j == i)
			printf("\n");
		}
		
	}
}




