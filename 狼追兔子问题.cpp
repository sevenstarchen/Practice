/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/10
*版 本 号：v1.0
*问题描述：一只兔子躲进了 10 个环形分布的洞的某一个，狼在第一个洞没有找到兔子，就隔一个洞，到第三个洞去找，也没有找到，就隔两个洞，到第六个洞去找，以后每次多隔一个洞 去找兔子……这样下去，结果一直找不到兔子，请问：兔子可能躲在哪个洞中？
*程序输出：兔子躲在的洞
*/
#include <stdio.h>
#include<math.h>


int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
	}
	a[0] = 1;
	int pos[101],p=1;
	pos[0] = 1;
	for (int i = 0; i < 100; i++) {
		printf("狼第%d次去了%d洞 \n", i+1 , pos[i]);
		pos[i + 1] = pos[i] + i + 2;
		if (pos[i + 1] >= 10 && pos[i + 1] % 10 == 0)
			pos[i + 1] = 10;
		else
			pos[i + 1] = pos[i + 1] % 10;
		p = pos[i + 1];
		a[p-1] = 1;
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] == 0)
			printf("\n兔子可能躲在%d洞 ", i+1);
		printf("a[%d]=%d ", i, a[i]);
	}

}
//使用“穷举法”来找兔子，通过循环结构进行穷举，设最大寻找次数为1000次。由于洞只有10个，因此第n次查找对应第n%10个洞，如果在第n%10个洞中没有找到兔子，则将数组元素a[n%10]置0。

//当循环结束后，再检查a数组各元素（各个洞）的值，若其值仍为1，则兔子可能藏身于该洞中。
