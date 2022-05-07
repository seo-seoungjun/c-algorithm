#include <stdio.h>

int main(void) {
	int number;
	printf("Input a integer number\n");
	scanf_s("%d", &number);
	if (number%2 == 0)
	{
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
	return 0;
};

