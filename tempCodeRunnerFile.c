#include <stdio.h>

int main() {
    int rows = 4;
    int prev = 1, next = 4;

    for (int i = 1; i <= rows; i++) {
        printf("%d%d ", prev, next);
        for (int j = 1; j < i; j++) {
            printf("%d ", next);
        }
        printf("\n");
        prev = next;
        next += 9;
    }

    return 0;
}
