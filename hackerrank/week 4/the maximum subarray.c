#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) scanf("%d", &a[i]);

        int max1 = a[0], cur = a[0];
        for (i = 1; i < n; i++) {
            if (cur + a[i] > a[i]) cur = cur + a[i];
            else cur = a[i];
            if (cur > max1) max1 = cur;
        }

        int max2 = a[0], sum = 0, pos = 0;
        for (i = 0; i < n; i++) {
            if (a[i] > 0) { sum += a[i]; pos = 1; }
            if (a[i] > max2) max2 = a[i];
        }
        if (pos) max2 = sum;

        printf("%d %d\n", max1, max2);
    }
    return 0;
}
