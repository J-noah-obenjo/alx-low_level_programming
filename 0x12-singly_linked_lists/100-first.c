#include <stdio.h>

void initialize(void) __attribute__ ((constructor));

/**
 * initialize - displays a sentence before the main
 * function is executed
 */
void initialize(void)
{
    printf("You're exhausted! and yet, you must permit,\n");
    printf("I carry my home on my shoulders!\n");
}

