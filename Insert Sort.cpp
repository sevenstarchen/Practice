#include<stdio.h>
int main(void)
{
	int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500,0 };
	int n;
	int i;
	int j;
	int temp;
	n = sizeof(a) / sizeof(int);
	for (i = 1; i < n; i++) {
		temp = a[i];
		for (j = i-1; j >-1&&a[j]>temp ; j--) {
			
			
				a[j+1] = a[j];
			
		}
		a[j +1] = temp;
	}
	for (int k = 0; k < n; k++) {
		printf("%d\n", a[k]);
	}
}

