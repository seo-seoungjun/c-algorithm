//#include <stdio.h>
//
//#define DataNumber 15000
//
//int main(void) {
//	errno_t err;
//	FILE *fp;
//	err = fopen_s(&fp, "prob1_rand.txt", "rt");
//	int i, count = 0;
//	double data[DataNumber];
//
//	if (err == 0)
//		puts("성공");
//	else {
//		puts("실패");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++) {
//		fscanf_s(fp, "%lf", &data[i]);
//		if (data[i]<500)
//		{
//			count++;
//		}
//	}
//	fclose(fp);
//	printf("%d", count);
//
//
//	return 0;
//}