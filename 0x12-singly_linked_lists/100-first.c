#include <stdio.h>
/**
 * msf - ammply constrctor attributr
 */
void msf(void) __attribute__ ((constructor));

/**
 * msf - implement of msf
 */
void msf(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
