#include <stdio.h>

int main(void) {
	int month, day;
	printf("month?\n");
	scanf_s("%d", &month);
	switch (month)
	{
	case 2:
		day = 28;
		break;
	case 4:
		day = 30;
		break;
	case 6:
		day = 30;
		break;
	case 9:
		day = 30;
		break;
	case 11:
		day = 30;
		break;
	default:
		day = 31;
		break;
	}
	printf("number of day is %d", day);
	return 0;
}