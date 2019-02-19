#include<stdio.h>
int main(void)
{
	int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500 };
	int n;
	int i;
	int j;
	int temp;
	n = sizeof(a) / sizeof(int);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-i ; j++) {
			if (a[j] < a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (int k = 0; k < n; k++) {
		printf("%d\n", a[k]);
	}
}

