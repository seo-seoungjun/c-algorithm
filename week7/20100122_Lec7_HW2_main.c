#include <stdio.h>

extern void min(float *randData, float *minNum, int *index);
int globalDataNum = 15000;

int main()
{
	errno_t err;
	FILE *fp;
	float randData[15000]; // Data load capacity
	float minNum; //  Minimum value
	int index; // index of the minimum value 
	int i;

	err = fopen_s(&fp, "Lec7_HW2_data.txt", "rt");// data Load

	if (err == 0) puts("file open ok!\n");
	else
	{
		puts("file open failed\n");
		return -1;
	}

	for (i = 0; i < globalDataNum; i++)
		fscanf_s(fp, "%f", &randData[i]);

	fclose(fp); // data load finished

	min(randData, &minNum, &index);

	printf("Minimum value is %.3f at index of %d\n", minNum, index);

	return 0;
}

