#include <stdio.h>

// MISRA code example 02.  CSCN74000 - winter24

int x = 5;

int memoryCompare(const char* s1, const char* s2, size_t len) {
	for (; len > 0; ++s1, ++s2) {
		if (s1 != s2)
			return 0;

		return 1;
	}
}
foo() {
	return 42;
}

int main(void) {
	int x = 10;

	foo();

	memoryCompare("hello", "world", 5);

	return 0;
}