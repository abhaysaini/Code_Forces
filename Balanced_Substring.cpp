#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }
        int p = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
            {
                cout << i << " " << i + 1 << endl;
                p = 1;
                break;
            }
        }
        if (!p)
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}