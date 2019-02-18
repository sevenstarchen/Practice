#include<stdio.h>
int main(void)
{
	int i;
	int c;
	int sum = 0;
	scanf("%d", &c);
	for (i = 0; i <= c; i++) {
		printf("i=%d\n", i);
		sum = sum + i;
	}
	printf("Sum=%d", sum);
	return 0;
}
