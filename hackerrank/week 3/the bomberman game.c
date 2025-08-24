#include <bits/stdc++.h>
using namespace std;

vector<string> explode(const vector<string> &grid, int r, int c) {
    vector<string> res(r, string(c, 'O'));
    vector<vector<int>> mark(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'O') {
                mark[i][j] = 1;
                if (i > 0) mark[i-1][j] = 1;
                if (i < r-1) mark[i+1][j] = 1;
                if (j > 0) mark[i][j-1] = 1;
                if (j < c-1) mark[i][j+1] = 1;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mark[i][j]) res[i][j] = '.';
        }
    }

    return res;
}

vector<string> bomberMan(int n, vector<string> grid) {
    int r = grid.size(), c = grid[0].size();

    if (n == 1) return grid;
    if (n % 2 == 0) return vector<string>(r, string(c, 'O'));

    vector<string> afterFirst = explode(grid, r, c);

    if (n % 4 == 3) return afterFirst;

    vector<string> afterSecond = explode(afterFirst, r, c);
    return afterSecond;
}

int main() {
    int r, c, n;
    cin >> r >> c >> n;
    vector<string> grid(r);
    for (int i = 0; i < r; i++) cin >> grid[i];

    vector<string> ans = bomberMan(n, grid);
    for (string &row : ans) cout << row << "\n";

    return 0;
}

