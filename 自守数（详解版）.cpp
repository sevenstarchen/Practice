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
	long mul, number, k, a, b; //mul���ֻ���number��ǰ���֣�k��number��λ����
	int i;
	printf("It exists following automorphic nmbers small than 100000:\n");
	for (number = 0; number < 100000; number++)
	{
		for (mul = number, k = 1; (mul /= 10) > 0; k *= 10);//�����ǵ�����һ��forѭ�������漰�����棬�м�
		/*��number��λ��ȷ����ȡ���ֽ��г˷�ʱ��ϵ��k*/
		a = k * 10;  /*aΪ��ȡ���ֻ�ʱ��ϵ��*/
		mul = 0;  /*�������nλ*/
		b = 10;  /*bΪ��ȡ������Ӧλʱ��ϵ��*/
		//printf("%d %d %d :\n", k, a, b);
		while (k > 0)
		{
			//printf("%d %d %d :", k, a, b);
			mul = (mul + (number % (k * 10))*(number%b - number % (b / 10))) % a;
			//printf("%d %d %d %d\n", number % (k * 10), number%b,number % (b / 10),mul);//number % (b / 10)��ȡ��ȡ�࣡����
			/*(���ֻ�+��ȡ�������ĺ�Nλ*��ȡ�����ĵ�Mλ)��%a�ٽ�ȡ���ֻ�*/
			k /= 10;  /*kΪ��ȡ������ʱ��ϵ��*/
			b *= 10;
		}
		if (number == mul)  /*�ж���Ϊ�����������*/
			printf("%ld   ", number);
	}
	printf("\n");

	return 0;
}




