//fmemopen
#include <stdio.h>
#include <stdint.h>
int target(uint8_t **data) {
	fmemopen(data[0], data[1][0], data[2]);
	return 0;
}