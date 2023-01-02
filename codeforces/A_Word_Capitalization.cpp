#include <bits/stdc++.h>
using namespace std;
const int N = 0;
 
int main() {
    string s;
    cin >> s;
    if (islower(s[0])) {
        s[0] = toupper(s[0]);
        cout << s;
    } else {
        cout << s;
    }

}