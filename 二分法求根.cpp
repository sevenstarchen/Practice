/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�������������ַ����
*�������������ֵ
*/
#include <stdio.h>
#include<math.h>
int fun(float x) {
	float y;
	y = 2 * x*x*x - 4 * x*x + 3 * x - 6;
	return y;
}
int main() {
	float x1=0, x2=0,yl,yr,ym,mid;
	printf("����������������F(a)*F(b)<0:");
	scanf("%f%f", &x1, &x2);
	do {
		yl = fun(x1);
		yr = fun(x2);
		mid = (x1 + x2) / 2;
		ym = fun(mid);
		if (yl*ym > 0)
			x1 = mid;
		else if (yl*ym < 0)
			x2 = mid;
		else
			break;
	} while (ym > 1e-5);
	printf("������%f", mid);
		return 0;
}