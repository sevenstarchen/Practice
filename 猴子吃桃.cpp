/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/10
*�� �� �ţ�v1.0
*�������������ӳ�������
*�������������ժ������
*/
#include <stdio.h>
#include<math.h>

int main() {
	int sum=0,leave=1,day=9;
	while (day != 0) {
		leave = (leave + 1) * 2; //��һ��ʣ�����ӵ�������
		printf("sum=%d ", leave);
		printf("day=%d \n", day);
		day--;
		
	}
	printf("sum=%d", leave);
}