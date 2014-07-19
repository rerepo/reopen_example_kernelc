/*
 ============================================================================
 Name        : c-complie.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <linux/kernel.h>

#include "func.h"

int main(void) {

	func();

	printf("SI_LOAD_SHIFT = %d\n", SI_LOAD_SHIFT);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
