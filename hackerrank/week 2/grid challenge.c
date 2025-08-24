#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char grid[100][101];

        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
            int len = strlen(grid[i]);

            for (int a = 0; a < len - 1; a++) {
                int minPos = a;
                for (int b = a + 1; b < len; b++) {
                    if (grid[i][b] < grid[i][minPos])
                        minPos = b;
                }
                if (minPos != a) {
                    char tmp = grid[i][a];
                    grid[i][a] = grid[i][minPos];
                    grid[i][minPos] = tmp;
                }
            }
        }

        int ok = 1;
        for (int col = 0; col < n; col++) {
            for (int row = 0; row < n - 1; row++) {
                if (grid[row][col] > grid[row + 1][col]) {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok) printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}
