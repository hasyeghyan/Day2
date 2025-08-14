#include <stdio.h>

void* memst(void *dest, int ch, int n) {

    unsigned char *d = (unsigned char *)dest;
    unsigned char s = (unsigned char)ch;

    for (int i = 0; i < n; i++) {
        d[i] = s;
    }
    return dest;
}
