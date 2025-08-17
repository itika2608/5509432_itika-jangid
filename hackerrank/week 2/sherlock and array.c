#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int answer = 0;   

        for (int i = 0; i < n; i++) {
            int leftSum = 0;
            int rightSum = 0;

            for (int j = 0; j < i; j++) {
                leftSum = leftSum + arr[j];
            }

            for (int j = i + 1; j < n; j++) {
                rightSum = rightSum + arr[j];
            }

            if (leftSum == rightSum) {
                answer = 1;
                break;
            }
        }

        if (answer == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
