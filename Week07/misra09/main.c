#include <stdio.h>
#include <stdbool.h>

// MISRA code example 09.  CSCN74000 - winter24

#define ARRAYSIZE	6

extern int array[];

bool searchArray(int* array, int count, int item) {
	if (count < 0)
		return false;

	if (array[count] != item)
		return searchArray(array, --count, item);
	else
		return true;
}

int main(void) {
	int array[ARRAYSIZE] = { 1,2,3,4 };

	if (searchArray(array, ARRAYSIZE, 3))
		printf("found\n");
	else
		printf("not found\n");
	return 0;
}
