//frexpf
#include <math.h>
#include <stdint.h>
int target(uint8_t **data) {
	frexpf(data[0][0], data[1]);
	return 0;
}