/*
*All rights reserved.
*�ļ����ƣ�main.c
*������ڣ�2019/03/7
*�� �� �ţ�v1.0
*����������������	
*������������
*/
#include <stdio.h>
#include <math.h>
float fun(float a) {
	float y;
	//y = a * a*a + a*a + 2;
	y = sin(a);
	return y;
}
float juxing(float a, float b,int n) {
	float s=0;
	float h = (b - a) / n;
	s = (fun(a) + fun(a+h))*h*0.5;
	printf("���ǵ�һ��S��%f", s);
	for (int i = 1; i < n; i++) {
		s =s+ ((fun(a + i * h) + fun(a + (i + 1)*h))*h*0.5);
	}
	return s;
}
int main() {
	int a, b;
	printf("������������:");
	scanf("%d%d", &a,&b);
	float s = juxing(a, b, 1000);
	printf("�����ֽ��Ϊ:%f ",s);
	return 0;
}
