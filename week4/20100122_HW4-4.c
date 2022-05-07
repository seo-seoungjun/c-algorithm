#include <stdio.h>


int main(void) {
	int line;
	printf("직각삼각형의 줄수를 입력하시오\n");
	scanf_s("%d", &line);
	for (int i = 0; i < line; i++) {
		if (i == 0)
		{
			printf("*");
		}
		else if (i == line - 1) {
			for (int i = 0; i < line; i++) {
				printf("*");
			};
		}
		else {
			printf("*");
			for (int j = 0; j < i - 1; j++) {
				printf(" ");
			};
			printf("*");
		}
		printf("\n");
	}
	return 0;
}