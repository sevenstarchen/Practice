/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*������������ٷ���������ˮ�ɻ�������ȫƽ����	
*������������
*/
#include <stdio.h>
#include <math.h>
int sushu(int x) {
	int i;
	for (i = 2; i <= sqrt(x); i++) {
		if (x%i == 0)
		break;
	}
	if (i > sqrt(x))
		return 1;
	else
		return 0;
}
int main() {
	int x,t,h,s;
	scanf("%d", &x);
	printf("������");
	for (int i = 2; i < x; i++) {
		if (sushu(i) == 1) {
			printf("%d ", i);
		}
	}
	printf("\nˮ�ɻ�����");
	for (int i = 100; i < x; i++) {
		t = i / 100;
		h = i / 10 % 10;
		s = i % 10;
		if (t*t*t + h * h*h + s * s*s == i) {
			printf("%d ", i);
		}
	}
	printf("\n��ȫƽ������");
	for (int i = 1; i*i < x; i++) {
		printf("%d ", i*i);
	}
		return 0;
}
