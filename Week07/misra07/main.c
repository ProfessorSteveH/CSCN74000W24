#include <stdio.h>

// MISRA code example 07.  CSCN74000 - winter24

char* greets(void) {
	return "Hello world!\n";
}

int main(void) {

	int a;
	scanf("%d", &a);
	switch (a) {
		case 1:
			puts("a is 1\n");
			unsigned long q = 12l;
		case 2:
			puts("a is 2\n");
			greets();
			break;
	}
	return 0;
}