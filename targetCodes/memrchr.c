//memrchr
#include <string.h>
#include <stdint.h>
int target(uint8_t **data) {
	memrchr(data[0], data[1][0], data[2][0]);
	return 0;
}