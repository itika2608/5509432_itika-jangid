#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    scanf("%d", &n);       
    scanf("%d", &k);       

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmpfunc);

    int minUnfair = 2147483647; 

    for(int i = 0; i <= n - k; i++) {
        int diff = arr[i + k - 1] - arr[i];
        if(diff < minUnfair) {
            minUnfair = diff;
        }
    }

    printf("%d\n", minUnfair);

    return 0;
}
