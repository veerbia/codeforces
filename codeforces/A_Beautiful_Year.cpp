#include <bits/stdc++.h>
using namespace std;

const int N = 0;

bool isDistinct(int num)
{
    unordered_set<int> digits;
    while (num > 0) {
        int digit = num % 10;
        if (digits.count(digit) > 0) {
            return false;
        }
        digits.insert(digit);
        num /= 10;
    }
    return true;
}


int main()
{
    int n;
    cin >> n;
    n += 1;
    while (!isDistinct(n)) {
        n += 1;
    }
    cout << n;
    return 0;
}
