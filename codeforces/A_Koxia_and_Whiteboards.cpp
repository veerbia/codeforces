#include <bits/stdc++.h>
using namespace std;
const int N = 0;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n + m);
        for (int k = 0; k < n + m; k++)
        {
            cin >> a[k];
        }
        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }

        cout << ans << endl;
    }
}