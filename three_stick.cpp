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
        sort(v.begin(),v.end());
        int ans = INT_MAX;
        for(int i =2;i<v.size();i++){
            int x = v[i-2],y=v[i-1],z=v[i];
            int a2= abs(x-y)+abs(y-y)+abs(z-y);
            ans = min(ans,a2);
        }
        cout<<ans<<endl;
    }
    return 0;
}























        // map<int,int> m;
        // for(auto it:v){
        //     m[it]++;
        // }
        // vector<pair<int,int>> p;
        // for(auto it:m){
        //     p.push_back({it.second,it.first});
        // }
        // sort(p.begin(),p.end());

        // if(p[0].first>=3){
        //     cout<<0<<endl;
        // }
        // else if(p[0].first==2){

        // }
        // else if(p[0].first==1){

        // }
        // else {

        // }