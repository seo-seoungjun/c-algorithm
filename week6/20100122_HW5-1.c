#include <stdio.h>

void triangleDrawing(int);

int main(void) {
	int line;
	printf("�����ﰢ���� �ټ��� �Է��Ͻÿ�\n");
	scanf_s("%d", &line);
	triangleDrawing(line);
	return 0;
}

void triangleDrawing(int line) {
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
}

