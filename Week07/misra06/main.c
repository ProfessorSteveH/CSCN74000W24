#include <stdio.h>
#include <stdbool.h>

// MISRA code example 01.  CSCN74000 - winter24

int checkReturn(char a, int b, bool isPositive) {
	printf("success\n");
	return (a + isPositive) - b;
}
int main(void) {

	int a;  
	int b;
	scanf("%d %d", &a, &b);

	if (a == 5)
		if (b == 6)
			checkReturn(a, b, true);

	else
		puts("failed\n");



	return 0;
}