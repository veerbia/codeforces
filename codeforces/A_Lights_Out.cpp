#include <bits/stdc++.h>
using namespace std;
const int N = 0;

// we use a cumulative sum approach

vector<vector<int>> a(3, vector<int> (3));

void modify(int i, int j, int inc)
{
    a[i][j] += inc;
    // check top
    if (i > 0)
    {
        a[i - 1][j] += inc;
    }
    // check left
    if (j > 0)
    {
        a[i][j - 1] += inc;
    }
    // check bottom
    if (i < 2)
    {
        a[i + 1][j] += inc;
    }
    // check right
    if (j < 2)
    {
        a[i][j + 1] += inc;
    }
}

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            modify(i, j, x);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << '\n';
    }
}