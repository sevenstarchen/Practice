/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*������������֤��°ͺղ���	
*�����������������
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
	int x;
	scanf("%d", &x);
	for (int i = 2; i < x; i++) {
		if (sushu(i) == 1 && sushu(x - i) == 1) {
			printf("%d=%d+%d\n", x, i, x - i);
			break;
		}
	}
		return 0;
}
