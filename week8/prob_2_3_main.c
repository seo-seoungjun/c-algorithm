#include <stdio.h>
#include <math.h>

void tempMax(int* mon, int* date, float* temp, int* time, int DataNumber, int* result);

int main()
{
	errno_t err;
	FILE* fp;
	int mon[8784], date[8784], time[8784], DataNumber = 8784;
	float temp[8784];
	int result[3];
	int i;

	// Month data loading
	err = fopen_s(&fp, "prob2_mon.txt", "rt");

	if (err == 0) puts("Month file open ok!\n");
	else
	{
		puts("Month file open failed\n");
		return -1;
	}

	for (i = 0; i < DataNumber; i++)
		fscanf_s(fp, "%d", &mon[i]);

	fclose(fp);

	// Date data loading
	err = fopen_s(&fp, "prob2_date.txt", "rt");

	if (err == 0) puts("Date file open ok!\n");
	else
	{
		puts("Date file open failed\n");
		return -1;
	}

	for (i = 0; i < DataNumber; i++)
		fscanf_s(fp, "%d", &date[i]);

	fclose(fp);

	// Temp data loading
	err = fopen_s(&fp, "prob2_temp.txt", "rt");

	if (err == 0) puts("Temp file open ok!\n");
	else
	{
		puts("Temp file open failed\n");
		return -1;
	}

	for (i = 0; i < DataNumber; i++)
		fscanf_s(fp, "%f", &temp[i]);
	fclose(fp);

	// Time data loading
	err = fopen_s(&fp, "prob2_time.txt", "rt");

	if (err == 0) puts("Time file open ok!\n");
	else
	{
		puts("Time file open failed\n");
		return -1;
	}

	for (i = 0; i < DataNumber; i++)
		fscanf_s(fp, "%d", &time[i]);

	fclose(fp);



	tempMax(mon, date, temp, time, DataNumber, result);


	printf("Maxmimum temperature was in %d / %d and it was is %d degree \n", result[0], result[1], result[2]);

	fclose(fp);
	return 0;

}


void tempMax(int* mon, int* date, float* temp, int* time, int DataNumber, int* result) {
	int i,j,k, index=0;
	float avg = 0, tempAvg =0;
	float max;
	
	for ( i = 0; i < 24; i++)
	{
		avg += temp[i];
	}

	max = floor((avg/24) + 0.5);

	for (i = 24; i < DataNumber; i+=24)
	{
		for (j = i; j < i+24; j++)
		{
			tempAvg += temp[j];
		}
		if (max > floor((tempAvg / 24) + 0.5))
		{
			max = floor((tempAvg / 24) + 0.5);
			index = i;
			tempAvg = 0;
		}
		else
		{
			tempAvg = 0;
		}
	}

	result[0] = mon[index];
	result[1] = date[index];
	result[2] = max;

};