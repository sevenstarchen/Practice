/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/16
*�� �� �ţ�v1.0
*������������һ����Χ�ڵ�������
*�����������Χ������������
*/
#include <stdio.h>
#include<math.h>
#include <string.h>
#include<stdio.h>
int main()
{
	long mul, number, k, a, b;
	for ( number=0 ; number < 100000; number++)
	{
		//printf("k1=%d \n",number);
		for (mul = number, k = 1; (mul / 10) > 0; k *= 10) {
			mul = mul / 10;
		}
		//printf("k=%d \n", k);
		a = k * 10;
		b = 10;
		mul = 0;
		while (k > 0) {
			mul = (mul + (number % (k * 10))*((number%b) - (number % (b / 10)))) % a;
			k /= 10;
			b *= 10;
		}
		//printf("mul=%d number=%d\n", mul,number);
		if (mul == number) {
			printf("%d ", number);
		}
	}
	printf("\n");

	return 0;
}




