#include <stdio.h>

union bytes {
    int i;
    unsigned char b[4];
};

int main(void) {
    union bytes u;
    u.i = 0x01020304;

    for (int i = 0; i < 4; i++) {
        printf("b[%d] = %02X\n", i, u.b[i]);
    }

    return 0;
}
