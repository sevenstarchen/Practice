/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*����������ͳ��ѧ���ɼ��������ܳɼ���ƽ���ɼ�����������������
*����������ܳɼ���ƽ���ɼ������ֶ�����
*/
#include <stdio.h>
int main() {
	int n=0, sum=0,a[100];
	double aver;
	printf("������ѧ��������:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("\n�������%d��ѧ���ɼ���", i + 1);
		scanf("%d", &a[i]);
	}
	for (int i = n; i < 100; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	aver =float(sum) / n;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 20)
			a[n + 1]++;
		else if (a[i] <= 40)
			a[n + 2]++;
		else if (a[i] <= 60)
			a[n + 3]++;
		else if (a[i] <= 80)
			a[n + 4]++;
		else if (a[i] <= 100)
			a[n + 5]++;

	}
	printf("�ܳɼ���%d ,ƽ����: %f ,0-20:%d 20-40:%d 40-60:%d 60-80:%d 80-100:%d ", sum, aver, a[n+ 1], a[n + 2], a[n + 3], a[n + 4], a[n + 5]);
		return 0;
}