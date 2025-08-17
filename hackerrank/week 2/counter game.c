#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);

        int moves = 0;

        while (n > 1) {
            unsigned long long p = 1;
            while (p < n) {
                p = p * 2;
            }

            if (p == n) {
                n = n / 2;
            } else {
                n = n - (p / 2);
            }
            moves++;
        }

        if (moves % 2 == 1) {
            printf("Louise\n");
        } else {
            printf("Richard\n");
        }
    }

    return 0;
}
