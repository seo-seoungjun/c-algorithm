#include <stdio.h>
#include <ctype.h>

int main(void) {
	int bool;
	char c;

	printf("Input character\n");
	scanf_s("%c", &c);
	
	//아스키 코드, 삼항연산자 이용
	bool = (c >= 97 && c <= 122)? 0: 1;

	printf("%c is %d\n", c, bool);

	//아래와 같은 방법으로도 코딩해보았습니다.

	//대문자일때 true 소문자일때 false를 라이브러리 함수를 이용하여 return시키고
	//그 값을 바로 int 값으로 저장하여 0또는 1로 바로 표기되게 함
	//이러한 경우 삼항연산자가 필요없어졌습니다
	bool = isupper(c);

	printf("%c is %d", c , bool);



	return 0;
}