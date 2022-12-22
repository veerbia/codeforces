#include <bits/stdc++.h>
using namespace std;
const int N = 0;

int main()
{
    int num;
    cin >> num;
    string s = to_string(num);

    int count = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            count += 1;
        }
    }
    cout << ((count == 7 || count == 4) ? "YES" : "NO");
}