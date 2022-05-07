#include <stdio.h>

int main(void) {
	errno_t err, err2;
	FILE *fp, *f;
	int i;
	double data[100];

	err = fopen_s(&fp, "Lec7_HW1_data.txt", "rt");

	if (err == 0)
		puts("파일오픈 성공!\n");
	else {
		puts("파일오픈 실패!\n");
		return -1;
	}

	for ( i = 0;  i < 90;  i++)
	{
		fscanf_s(fp, "%lf", &data[i]);
	}

	for (i = 0; i < 90; i++)
	{
		printf("%lf\n", data[i]);
	}

	fclose(fp);

	err2 = fopen_s(&f, "result.txt", "wt");

	if (err2 == 0)
		puts("파일오픈 성공!\n");
	else {
		puts("파일오픈 실패!\n");
		return -1;
	}

	for (i = 85; i < 90; i++) {
		fprintf(f, "%lf\n", data[i]);	
		printf("%lf\n", data[i]);
	}

	fclose(f);

	return 0;
}