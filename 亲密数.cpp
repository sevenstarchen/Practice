/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/13
*版 本 号：v1.0
*问题描述：求一个范围内的完数（因子之和等于本身）
*思路：n的平方对整的x次幂取余结果是n，则满足条件
*程序输出：所有完数
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	printf("input max:");
	int n;
	scanf("%d", &n);
	printf("n=%d\n", n);
	int x, k;
	for (int i = 2; i <= n;i++) {
			 k = 0;								//k在每次循环都要从新赋值为1，要不然K会一直累积
			for (int j = 1; j <= i / 2; j++) {	//可以是j<i也可以是现在这个，现在这个遍历次数少些，但结果都一样
				if (i%j == 0) {
					k = k + j;		/*计算数a的各因子，各因子之和存放于k*/
				}
			}
			int n1 = 0;						//注意这里是n1，如果是n那么循环就直接结束了，因为最外层循环i＜=n；
			for (int x = 1; x <= k / 2; x++) {
				if (k%x == 0) {
					n1 = n1 + x;		/*计算k的各因子，各因子之和存于n1*/
				}
			}
			if (n1==i&&i<k) {	 /*使每对亲密数只输出一次*/
				printf("%d-->%d \n",i,k );	/*若n=a，则a和b是一对亲密数，输出*/
			}
	}
	return 0;
}




