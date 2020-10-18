#include <stdio.h>
int main() {
	int x[10],y;
	printf("Number of mountain (max 10): ");
	scanf_s("%d", &y);
	if (y >= 0 && y <= 10) {
		for (int i = 1; i <= y; i++) {
			printf("Mountain %d : ", i);
			scanf_s("%d", &x[i]);
		}
		for (int a = 1; a <= y; a++) {
			for (int b = 1; b <= (2 * x[a]) - 1; b++) {
				for (int c = 1; c <= (2 * x[a]) - 1; c++) {
					if ((b >= c and b + c <= 2 * x[a]))
						printf("* ");
					else
						printf("  ");
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	else
		printf("ERROR");
	return 0;
}