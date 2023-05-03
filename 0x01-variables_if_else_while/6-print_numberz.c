#include <stdio.h>

int main(void) {
    // ASCII code for '0' is 48
    for (int i = 0; i < 10; i++) {
        putchar(i + 48);
    }
    putchar('\n');
    return 0;
}

