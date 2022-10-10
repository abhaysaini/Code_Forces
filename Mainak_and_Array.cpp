#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int mn = INT_MAX,mx=INT_MIN;
        for(int i =0;i<n-1;i++){
            mn = min(mn,v[i]);
        }
        for(int i =1;i<n;i++){
            mx = max(mx,v[i]);
        }

        int diff=INT_MIN;
        for(int i =1;i<n;i++){
            diff = max(diff,v[i-1]-v[i]);
        }
        cout<<max({diff,v[n-1]-mn,mx-v[0]})<<endl;
    }
    return 0;
}