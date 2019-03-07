/*
*All rights reserved.
*文件名称：main.c
*完成日期：2019/03/7
*版 本 号：v1.0
*问题描述：统计学生成绩，包括总成绩、平均成绩、各分数段人数等
*程序输出：总成绩、平均成绩、各分段人数
*/
#include <stdio.h>
int main() {
	int n=0, sum=0,a[100];
	double aver;
	printf("请输入学生总人数:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("\n请输入第%d个学生成绩：", i + 1);
		scanf("%d", &a[i]);
	}
	for (int i = n; i < 100; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	aver =float(sum) / n;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 20)
			a[n + 1]++;
		else if (a[i] <= 40)
			a[n + 2]++;
		else if (a[i] <= 60)
			a[n + 3]++;
		else if (a[i] <= 80)
			a[n + 4]++;
		else if (a[i] <= 100)
			a[n + 5]++;

	}
	printf("总成绩：%d ,平均分: %f ,0-20:%d 20-40:%d 40-60:%d 60-80:%d 80-100:%d ", sum, aver, a[n+ 1], a[n + 2], a[n + 3], a[n + 4], a[n + 5]);
		return 0;
}