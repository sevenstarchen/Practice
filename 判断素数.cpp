/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/13
*�� �� �ţ�v1.0
*������������Բ����
*���������Բ����
*/
//pi/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ����
#include <stdio.h>
#include<math.h>
#include <string.h>
int main() {
	int n, k = 0;
	scanf("%d", &n);
	for (int i = 1; i <= (int)sqrt((double)n); i++) {//sqrt����������double,Ҫǿת����
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




