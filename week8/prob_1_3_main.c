//#include <stdio.h>
//
//int  primeNumber(int* randData, int DataNumber, int* result);
//
//int main()
//{
//	errno_t err;
//	FILE* fp;
//	int randData[15000], DataNumber = 15000;
//	int result[5000], NumberofPrime; // NumberofPrime is number of prime number
//
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
//	NumberofPrime = primeNumber(randData, DataNumber, result);
//
//	printf("Number of prime number is %d and 10th prime number is %d", NumberofPrime, result[9]);
//
//	fclose(fp);
//
//	return 0;
//}
//
//int  primeNumber(int* randData, int DataNumber, int* result) {
//	int NumberofPrime=0, i, j=0, k;
//
//	for (i = 0; i <= DataNumber; i++)
//	{
//		for (k = 2; k < randData[i]; k++) {
//			if (randData[i] % k == 0) {
//				break;
//			};
//		};
//		if (randData[i] == k)
//		{
//			NumberofPrime++;
//			result[j] = randData[i];
//			j++;
//		};
//	};
//
//	return NumberofPrime;
//}