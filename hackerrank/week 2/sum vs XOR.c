#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    int zeroBits = 0;

    while (n > 0) {
        if ((n % 2) == 0) {   
            zeroBits++;
        }
        n = n / 2;           
    }

    long long answer = 1;
    for (int i = 0; i < zeroBits; i++) {
        answer = answer * 2;
    }

    printf("%lld\n", answer);

    return 0;
}

