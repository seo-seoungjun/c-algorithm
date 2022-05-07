#include <stdio.h>

int main(void) {
	int x, y;
	printf("input coordinate x\n");
	scanf_s("%d", &x);
	printf("input coordinate y\n");
	scanf_s("%d", &y);

	//저는 이러한 방식으로 코딩하였으나 이후 교수님의 솔루션 강의를 들어보니 삼항연산자를 최대한 활용하지 못한 것 같습니다
	//피드백 영상 감사합니다.

	(x > 0 && y > 0) ? printf("(%d,%d) is at 1 quadrant ", x, y) :
		(x < 0 && y > 0) ? printf("(%d,%d) is at 2 quadrant ", x, y) :
		(x < 0 && y < 0) ? printf("(%d,%d) is at 3 quadrant ", x, y) :
		(x > 0 && y < 0) ? printf("(%d,%d) is at 4 quadrant ", x, y) : printf("(%d,%d) is at line ", x, y) ;

	return 0;
}