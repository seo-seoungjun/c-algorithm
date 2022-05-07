//#include <stdio.h>
//#include <math.h>
//
//int tempAverage(int* mon, int* date, float* temp, int* time, int DataNumber, int monInput, int dateInput);
//
//int main()
//{
//	errno_t err;
//	FILE* fp;
//	int mon[8784], date[8784], time[8784], DataNumber = 8784;
//	float temp[8784];
//	int monInput = 9, dateInput = 12, aveResult;
//	int i;
//
//	// Month data loading
//	err = fopen_s(&fp, "prob2_mon.txt", "rt");
//
//	if (err == 0) puts("Month file open ok!\n");
//	else
//	{
//		puts("Month file open failed\n");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++)
//		fscanf_s(fp, "%d", &mon[i]);
//
//	fclose(fp);
//
//	// Date data loading
//	err = fopen_s(&fp, "prob2_date.txt", "rt");
//
//	if (err == 0) puts("Date file open ok!\n");
//	else
//	{
//		puts("Date file open failed\n");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++)
//		fscanf_s(fp, "%d", &date[i]);
//
//	fclose(fp);
//
//	// Temp data loading
//	err = fopen_s(&fp, "prob2_temp.txt", "rt");
//
//	if (err == 0) puts("Temp file open ok!\n");
//	else
//	{
//		puts("Temp file open failed\n");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++)
//		fscanf_s(fp, "%f", &temp[i]);
//	fclose(fp);
//
//	// Time data loading
//	err = fopen_s(&fp, "prob2_time.txt", "rt");
//
//	if (err == 0) puts("Time file open ok!\n");
//	else
//	{
//		puts("Time file open failed\n");
//		return -1;
//	}
//
//	for (i = 0; i < DataNumber; i++)
//		fscanf_s(fp, "%d", &time[i]);
//
//	fclose(fp);
//
//
//
//	aveResult = tempAverage(mon, date, temp, time, DataNumber, monInput, dateInput);
//
//	printf("averge temperature of %d / %d is %d \n", monInput, dateInput, aveResult);
//
//	fclose(fp);
//	return 0;
//
//}
//
//int tempAverage(int* mon, int* date, float* temp, int* time, int DataNumber, int monInput, int dateInput) {
//	float aveResult=0;
//	int i, index=0;
//
//	for ( i = 0; i < DataNumber; i++)
//	{
//		if (mon[i] == monInput)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	printf("%d %d\n", index, date[index]);
//
//	for (i = index; i < DataNumber; i++)
//	{
//		if (date[i] == dateInput)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	printf("%d %d\n", index, date[index]);
//
//	printf("%d \n", time[index+24]); //다음날 0임
//
//	for (i = index; i < index + 24; i++)
//	{
//		aveResult += temp[i];
//	}
//
//	printf("%f\n", aveResult / 24);
//	printf("%f\n", floor((aveResult / 24)+0.5));
//
//	return round(aveResult/24);
//}