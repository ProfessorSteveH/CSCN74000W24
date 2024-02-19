#include <stdio.h>

// MISRA code example 08.  CSCN74000 - winter24

struct flags {
	int b : 3;
};

typedef union number {
	int Int;
	float Float;
	double Double;
} NUMBER;

int main(void) {

	struct flags f;
	f.b = 12;
	if (f.b != 12)
		printf("flags is not set\n");

	NUMBER six = { .Int = 6 };

	return 0;
}