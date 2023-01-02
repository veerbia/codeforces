#include <bits/stdc++.h>
using namespace std;

int t, n;
long long a[110];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        bool flag = true;
        for (int x = 1; x <= 100; x++) {
            bool valid = true;
            for (int i = 1; i < n; i++) {
                for (int j = i + 1; j <= n; j++) {
                    if (__gcd(a[i] + x, a[j] + x) != 1) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) break;
            }
            if (valid) {
                flag = true;
                break;
            } else {
                flag = false;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
