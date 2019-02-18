#include<stdio.h>
int main(void)
{
	int i = 0;
	int Max = -9999;
	int Min = 99;
	//int a[5] = { 1,3,2,5,9 };
	int a[5];
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
}
	for (i = 0; i < 5; i++) {
		if (a[i] > Max) {
			Max = a[i];
		}
		if (a[i] < Min) {
			Min = a[i];
		}
	}
	printf("Max=%d,Min=%d\n", Max, Min);
	return 0;
}
