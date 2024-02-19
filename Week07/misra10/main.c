#include <stdio.h>
#include <stdlib.h>

#define while(condition)  for(;(condition);)

int error;

void increase(int e) {
	error += e;
}

void decrease(int e) {
	error -= e;
}

void clearError(unsigned error) {
	if (error < 0)
		increase(-error);
	else
		decrease(error);
}

void fileAccess(char* filename) {
	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
		abort();

	int value;
	fscanf(fp, "%d", &value);
	fclose(fp);
}

int main(void) {

	error = 5;
	int input;
	while (scanf("%d", &input) != 1)
		;

	if (input > 0)
		clearError(error);
	else if (input == 0)
		fileAccess("filename");

	return 0;
}