//#include <stdio.h>
//
//int commonMultiple(int input1, int input2, int* randData, int DataNumber, int* result);
//
//int main()
//{
//	errno_t err;
//	FILE* fp;
//	int randData[15000], DataNumber = 15000;
//	int result[5000], NumberofCommon; // NumberofCommon is number of common multiple of input1 and input2
//	int input1 = 7, input2 = 9;
//	int i;
//	err = fopen_s(&fp, "prob1_rand.txt", "rt");
//
//	if (err == 0) puts("file open ok!\n");
//	else
//	{
//		puts("file open failed\n");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++)
//		fscanf_s(fp, "%d", &randData[i]);
//
//
//	NumberofCommon = commonMultiple(input1, input2, randData, DataNumber, result);
//
//	printf("Number of common multiple of %d and %d is %d\n", input1, input2, NumberofCommon);
//	printf("10 th common multiple number is %d", result[9]);
//
//	fclose(fp);
//	return 0;
//}
//
//
//int commonMultiple(int input1, int input2, int* randData, int DataNumber, int* result) {
//
//	int i, j = 0, NumberofCommon = 0;
//
//	for (i = 0; i < DataNumber; i++) {
//		if (randData[i] % input1 == 0 && randData[i] % input2 == 0)
//		{
//			NumberofCommon++;
//			result[j] = randData[i];
//			j++;
//		};
//	};
//
//	return NumberofCommon;
//}