/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*����������������ɹ������
*������������ĳһ�����ڴ��㻹��ɹ��
*/
#include <stdio.h>
#include<math.h>

int fun1(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
	{
		return 0;
	}
}
int fun2(int year,int month,int day) {
	int f=fun1(year);
	int sum = 0,sumy=0;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };    /*����a���ƽ��ÿ�µ�����*/
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };    /*����b�������ÿ�µ�����*/
	int y = year - 2011;
	for (int i = 2011; i < year; i++) {
		if (f == 1)
			sumy += 366;
		else
			sumy += 355;
	}
	//int m = month - 1;
	int d = day ;
	for (int i = 0; i < month-1; i++) {
		if (f == 1)
			 sum = b[i] + sum;
		else
			 sum = a[i] + sum;
	}
	d += sum;
	sum = d + sumy;
	return sum;
}
int main() {
	int y, m, d;
	printf("�����������գ�");
	scanf("%d%d%d", &y,&m,&d);
	int sum=fun2(y, m, d);
	if (sum % 5 < 4 && sum % 5 > 0) {
		printf("sum=%d ,�ڴ���", sum);
	}
	else
		printf("sum=%d ,��ɹ��", sum);
	
}
/*
ʵ�ֹ��̣�
(1) �Զ��庯�� fun1()�������ж����������Ƿ������ꡣ

(2) �Զ��庯�� fun2()�����������������ھ� 2011 �� 1 �� 1 �չ��ж����졣
*/