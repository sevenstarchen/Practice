/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*�����������������Ǹ���������󹫱�����
*�����������󹫱���
*/
#include <stdio.h>

int main()
{
	int a, b, r,i;
	printf("������������������\n");
	scanf("%d %d", &a, &b);
	//���a<b������a��b��ֵ
	if (a < b)
	{
		r = a;
		a = b;
		b = r;
	}
	for (i = 1; i > 0; i++) {
		if (i%a == 0 && i%b == 0) {

			//�����󹫱���
			printf("��󹫱���Ϊ��%d\n", a);
			break;
		}
	}




	return 0;
}
