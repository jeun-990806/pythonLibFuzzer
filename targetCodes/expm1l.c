//expm1l
#include <math.h>
#include <stdint.h>
int target(uint8_t **data) {
	expm1l(data[0][0]);
	return 0;
}