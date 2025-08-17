#include <stdio.h>
#include <string.h>

int main() {
    char n[100005];   
    int k;
    scanf("%s %d", n, &k);

    long long sum = 0;

    for (int i = 0; n[i] != '\0'; i++) {
        sum = sum + (n[i] - '0');
    }

    sum = sum * k;

    while (sum >= 10) {
        long long temp = 0;
        while (sum > 0) {
            temp = temp + (sum % 10);
            sum = sum / 10;
        }
        sum = temp;
    }

    printf("%lld\n", sum);

    return 0;
}

