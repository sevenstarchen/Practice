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
	float pi = 0,i=1;
	float s=1,n=1;
	while (fabs(i)> 1e-6) {
		pi += i;
		n = n + 2;
		s = -s;
		i = s / n;
		//s = 1/i;

	}
			printf("%.6f\n",pi);
}




