/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/16
*�� �� �ţ�v1.0
*������������һ����Χ�ڵĹ�����
*�����������Χ�����й�����
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 0; a < 100; a++) {
		for (b = a + 1; b < 100; b++) {
			c = (int)sqrt(a*a + b * b);
			if (c*c == a * a + b * b&&a + b > c&&a + c > b&&b + c > a&&c<100) {
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	printf("\n");

	return 0;
}




