#include <stdio.h>

int main(void) {
	for (int i = 0; i < 5; i++) {
		if (i == 0 || i == 4) {
			for (int i = 0; i < 5; i++) {
				printf("*");
			};
		}
		else {
			printf("*   *");
		}
		printf("\n");
	};
	return 0;
}