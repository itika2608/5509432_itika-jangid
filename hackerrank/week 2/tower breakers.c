#include <stdio.h>

int main() {
    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int towers, height;
        scanf("%d %d", &towers, &height);

        int winner;

        if (height == 1) {
            winner = 2;
        }
        else if (towers % 2 == 0) {
            winner = 2;
        }
        else {
            winner = 1;
        }

        printf("%d\n", winner);
    }

    return 0;
}
