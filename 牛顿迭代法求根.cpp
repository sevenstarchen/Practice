/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*����������ţ�ٵ��������
*�������������ֵ
*/
#include <stdio.h>
#include<math.h>
int main() {
	float x, x0,f1,f2;
	printf("���������:");
	scanf("%f", &x);
	do  {
		x0 = x;
		f1 = (2 * x0*x0*x0 )- (4 * x0*x0 )+ (3 * x0) - 6;
		f2 = (6 * x0*x0) - (8 * x0) + 3;
		printf("f1=%f f2=%f \n", f1, f2);
		x = x0 - f1 / f2;
	} while (fabs(x - x0) >= 1e-5);
		printf("%f", x);
		return 0;
}