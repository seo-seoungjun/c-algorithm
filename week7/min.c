#include <stdio.h>

extern int globalDataNum;

void min(float *randData, float *minNum, int *index) {

	int i;

	*minNum = randData[0];

	for (i = 1; i < globalDataNum; i++) {
		if (*minNum > randData[i]) {
			*minNum = randData[i];
			*index = i;
		}
	}


}