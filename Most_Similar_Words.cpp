#include <bits/stdc++.h>
using namespace std;

int cmp(string s, string p){
    int num = 0;
    for(int i =0;i<s.length();i++){
        num+=abs(s[i]-p[i]);
    }
    return num;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }

        int ans = INT_MAX;
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int x = cmp(v[i],v[j]);
                ans = min(ans,x);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}