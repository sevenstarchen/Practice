#include<stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i < 30; i++) {
		for (j = 0; j < 33; j++) {
			for (k = 3; k < 99; k++) {
				if (i * 5 + j * 3 + (k / 3) == 100)
					if (i + j + k == 100)
						if (k % 3 == 0)
							printf("¹«¼¦£º%d£¬Ä¸¼¦£º%d£¬Ð¡¼¦£º%d\n", i, j, k);

			}
		}
	}
}

