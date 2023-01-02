#include <bits/stdc++.h>
using namespace std;
const int N = 0;
 
int prime(int m)
{
    int prime = 1;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            prime = 0;
            return prime;
        }
    }
    return prime;
}
int main()
{
    int n, m, prime_n = 0;
    cin >> n >> m;
    for (int i = n+1; i <= m; i++)
    {
        if (prime(i))
        {
            prime_n = i;
            break;
        }
    }
    if (m == prime_n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}