//envz_entry
#include <envz.h>
#include <stdint.h>
int target(uint8_t **data) {
	envz_entry(data[0], data[1][0], data[2]);
	return 0;
}