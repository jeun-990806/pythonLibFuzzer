//stpcpy
#include <string.h>
#include <stdint.h>
int target(uint8_t **data) {
	stpcpy(data[0], data[1]);
	return 0;
}