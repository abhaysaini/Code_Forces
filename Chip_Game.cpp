#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n % 2)
        {
            if (m % 2)
            {
                cout << "Tonya" << endl;
            }
            else
            {
                cout << "Burenka" << endl;
            }
        }
        else
        {
            if (m % 2)
            {
                cout << "Burenka" << endl;
            }
            else
            {
                cout << "Tonya" << endl;
            }
        }
    }
    return 0;
}