#include<stdio.h>
int main(void)
{
	int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500,0 };
	int n;
	int i;
	int j;
	int temp;
	n = sizeof(a) / sizeof(int);
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n ; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int k = 0; k < n; k++) {
		printf("%d\n", a[k]);
	}
}

