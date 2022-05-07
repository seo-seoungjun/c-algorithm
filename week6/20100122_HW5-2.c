#include <stdio.h>

int numDays(int);

int main(void) {
	int Month;
	int day;
	printf("Month?\n");
	scanf_s("%d", &Month);
	day = numDays(Month);
	printf("Number of day is %d", day);
	return 0;
}

int numDays(int month) {
	int day;
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
	return day;
}