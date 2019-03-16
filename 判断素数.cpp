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
	int n, k = 0;
	scanf("%d", &n);
	for (int i = 1; i <= (int)sqrt((double)n); i++) {//sqrt参数类型是double,要强转两次
	//printf("sqrt=%d", (int)sqrt((double)n)); 
		int s = n % i;
		if (s == 0)
			k++;
	}
	if (k > 2)
		printf("No");
	else
		printf("Yes");
}




