//fgetxattr
#include <sys/xattr.h>
#include <stdint.h>
int target(uint8_t **data) {
	fgetxattr(data[0][0], data[1], data[2], data[3][0]);
	return 0;
}