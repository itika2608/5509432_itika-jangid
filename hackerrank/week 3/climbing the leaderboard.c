#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> uniqueScores;
    uniqueScores.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); i++) {
        if (ranked[i] != ranked[i - 1])
            uniqueScores.push_back(ranked[i]);
    }

    vector<int> result;
    int n = uniqueScores.size();
    int idx = n - 1; 

    for (int score : player) {
        while (idx >= 0 && score >= uniqueScores[idx]) {
            idx--;
        }
        result.push_back(idx + 2); 
    }

    return result;
}

int main() {
    int n; cin >> n;
    vector<int> ranked(n);
    for (int i = 0; i < n; i++) cin >> ranked[i];

    int m; cin >> m;
    vector<int> player(m);
    for (int i = 0; i < m; i++) cin >> player[i];

    vector<int> res = climbingLeaderboard(ranked, player);
    for (int r : res) cout << r << "\n";

    return 0;
}
