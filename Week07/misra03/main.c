#include <stdio.h>

// MISRA code example 03.  CSCN74000 - winter24

int main(void) {

	const char* exitStr = "\x0exit";
	int x = 5;
	int y = 10;

	x = 8;
	y = x + 2;

	printf("x=%d\n", x);
	printf("y=%d\n", y);

	int value = 5;
	int result = value << -2; //left shift by negaative count

	int a = 5;
	double b = a;

	return 0;
}