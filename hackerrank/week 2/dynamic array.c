#include <stdio.h>

#define MAXN 100  
#define MAXQ 1000 

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int arr[MAXN][MAXQ];   
    int size[MAXN];        

    for (int i = 0; i < n; i++) {
        size[i] = 0;       
    }

    int lastAnswer = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;   

        if (type == 1) {
            arr[idx][size[idx]] = y;
            size[idx]++;

        } else if (type == 2) {
            int pos = y % size[idx];
            lastAnswer = arr[idx][pos];
            printf("%d\n", lastAnswer);
        }
    }

    return 0;
}
