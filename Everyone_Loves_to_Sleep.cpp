#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        M = H*60+M;
        int ans = INT_MAX;
        for(int i =0;i<n;i++){
            int x,y;
            cin>>x>>y;
            int min1 = x*60+y;
            if(min1<M){
                min1 = min1+24*60;
            }
            ans = min(ans,min1-M);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
    return 0;
}