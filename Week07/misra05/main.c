#include <stdio.h>

// MISRA code example 05.  CSCN74000 - winter24

int main(void) {
	int a = 5;
	int* ptr = &a;
	
	int x = (int)ptr;

	int y = 5;
	int* ptr2 = (int*)y;

	int b = 5;
	int c = b++ + ++b;

	return 0;
}