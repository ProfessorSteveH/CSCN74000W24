#include <stdio.h>

// MISRA code example 01.  CSCN74000 - winter24

/* this comment style is ok */

/* but //this comment is not ok */

void example_function() {

    Cleanup:
        printf("Hello, world!\n");     
}

int main() {
    example_function();

    return 0;
}   
