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
        map<int,int> m;
        for(int i =0;i<n;i++){
            m[v[i]]++;
        }
        
    }
    return 0;
}