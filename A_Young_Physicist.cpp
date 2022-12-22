#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;
    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

