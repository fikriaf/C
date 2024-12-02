#include <stdio.h>

int main() {
    int i = 1;

start_loop:
    if (i <= 10) {
        printf("%d\n", i);
        i++;
        goto start_loop;
    }

    return 0;
}
