#include <bits/stdc++.h>
using namespace std;
const int N = 0;

int main()
{
    vector<char> lc, uc;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            lc.push_back(s[i]);
        }
        else if (isupper(s[i]))
        {
            uc.push_back(s[i]);
        }
    }
    if (uc.size() > lc.size())
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
}