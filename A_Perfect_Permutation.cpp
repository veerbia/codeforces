#include <bits/stdc++.h>
using namespace std;
const int N = 0;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
    }
    return 0;
}