//copysignl
#include <math.h>
#include <stdint.h>
int target(uint8_t **data) {
	copysignl(data[0][0], data[1][0]);
	return 0;
}