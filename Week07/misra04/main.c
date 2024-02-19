#include <stdio.h>
// MISRA code example 04.  CSCN74000 - winter24

void myFunction(int x) {
	int count = printf("Value: %d\n", x);
}

int main(void) {

	void (*funcPtr)(int) = (void (*)(int))myFunction;

	int (*invalidFuncPtr)(int) = (int (*)(int))myFunction;

	funcPtr(42);

	return 0;
}