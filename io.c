#include <stdio.h>


int main() {
// can't be char because it must be big enough to hold EOF in addition to any chars
    int c;

// getchar is different from eof (end of file)
    printf("%d", EOF);
    printf("%d: ", getchar() != EOF);
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
