//#include <stdio.h>
//
//int main(void) {
//	errno_t err;
//	FILE *fp;
//	err = fopen_s(&fp, "prob2_temp.txt", "rt");
//	int dataNumber = 8784;
//	float temp[8784], max;
//	int mon[8784], day[8784], time[8784];
//	int i, index;
//
//	if (err == 0)
//		printf("suc\n");
//	else {
//		printf("fail\n");
//		return -1;
//	}
//
//	for (i = 0; i < dataNumber; i++)
//	{
//		fscanf_s(fp, "%f", &temp[i]);
//	};
//
//	max = temp[0];
//	for (i = 1; i < dataNumber; i++)
//	{
//		if (max < temp[i])
//		{
//			max = temp[i];
//			index = i;
//		}
//	};
//
//	fclose(fp);
//
//	err = fopen_s(&fp, "prob2_mon.txt", "rt");
//
//	if (err == 0)
//		printf("suc\n");
//	else {
//		printf("fail\n");
//		return -1;
//	}
//
//	for (i = 0; i < dataNumber; i++)
//	{
//		fscanf_s(fp, "%d", &mon[i]);
//	};
//
//	fclose(fp);
//
//	err = fopen_s(&fp, "prob2_date.txt", "rt");
//
//	if (err == 0)
//		printf("suc\n");
//	else {
//		printf("fail\n");
//		return -1;
//	}
//
//	for (i = 0; i < dataNumber; i++)
//	{
//		fscanf_s(fp, "%d", &day[i]);
//	};
//
//	fclose(fp);
//
//	err = fopen_s(&fp, "prob2_time.txt", "rt");
//
//	if (err == 0)
//		printf("suc\n");
//	else {
//		printf("fail\n");
//		return -1;
//	}
//
//	for (i = 0; i < dataNumber; i++)
//	{
//		fscanf_s(fp, "%d", &time[i]);
//	};
//
//	fclose(fp);
//
//	printf("%d월 %d일 %d시 %f도", mon[index], day[index], time[index], max);
//
//	return 0;
//}