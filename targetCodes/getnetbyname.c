//getnetbyname
#include <netdb.h>
#include <stdint.h>
int target(uint8_t **data) {
	getnetbyname(data[0]);
	return 0;
}