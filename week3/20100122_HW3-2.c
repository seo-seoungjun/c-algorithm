#include <stdio.h>
#include <ctype.h>

int main(void) {
	int bool;
	char c;

	printf("Input character\n");
	scanf_s("%c", &c);
	
	//�ƽ�Ű �ڵ�, ���׿����� �̿�
	bool = (c >= 97 && c <= 122)? 0: 1;

	printf("%c is %d\n", c, bool);

	//�Ʒ��� ���� ������ε� �ڵ��غ��ҽ��ϴ�.

	//�빮���϶� true �ҹ����϶� false�� ���̺귯�� �Լ��� �̿��Ͽ� return��Ű��
	//�� ���� �ٷ� int ������ �����Ͽ� 0�Ǵ� 1�� �ٷ� ǥ��ǰ� ��
	//�̷��� ��� ���׿����ڰ� �ʿ���������ϴ�
	bool = isupper(c);

	printf("%c is %d", c , bool);



	return 0;
}