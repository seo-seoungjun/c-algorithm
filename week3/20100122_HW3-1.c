#include <stdio.h>

int main(void) {
	int x, y;
	printf("input coordinate x\n");
	scanf_s("%d", &x);
	printf("input coordinate y\n");
	scanf_s("%d", &y);

	//���� �̷��� ������� �ڵ��Ͽ����� ���� �������� �ַ�� ���Ǹ� ���� ���׿����ڸ� �ִ��� Ȱ������ ���� �� �����ϴ�
	//�ǵ�� ���� �����մϴ�.

	(x > 0 && y > 0) ? printf("(%d,%d) is at 1 quadrant ", x, y) :
		(x < 0 && y > 0) ? printf("(%d,%d) is at 2 quadrant ", x, y) :
		(x < 0 && y < 0) ? printf("(%d,%d) is at 3 quadrant ", x, y) :
		(x > 0 && y < 0) ? printf("(%d,%d) is at 4 quadrant ", x, y) : printf("(%d,%d) is at line ", x, y) ;

	return 0;
}