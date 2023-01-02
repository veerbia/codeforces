#include <iostream>

using namespace std;

const int MOD = 998244353;

int count_ways(string s, int k) {
    int n = s.size();
    int dp[n+1][k+1];
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (s[i-1] == '(') {
                dp[i][j] = dp[i-1][j];
            } else {
                if (j > 0) {
                    dp[i][j] = dp[i-1][j-1];
                }
                if (j+1 <= k) {
                    dp[i][j] += dp[i-1][j+1];
                    dp[i][j] %= MOD;
                }
            }
        }
    }
    return dp[n][k];
}

int main() {
    string s;
    cin >> s;
    int k = 0;
    int unmatched = 0;
    for (char c : s) {
        if (c == '(') {
            k++;
        } else if (k > 0) {
            k--;
        } else {
            unmatched++;
        }
    }
    k += unmatched;
    cout << count_ways(s, k) << endl;
    return 0;
}
