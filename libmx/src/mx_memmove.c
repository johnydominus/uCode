#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char buf[100];

    mx_memcpy(buf, src, len);
    mx_memcpy(dst, buf, len);
    return dst;
}
