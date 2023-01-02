#include <iostream>

using namespace std;

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read n and k
        int n, k;
        cin >> n >> k;

        // Create the permutation
        for (int i = 1; i <= n; i++)
        {
            cout << i + k - 1 << " ";
            if (i % k == 0)
            {
                k = -k;
            }
        }
        cout << endl;
    }

    return 0;
}
