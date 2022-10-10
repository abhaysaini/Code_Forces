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
        int flag=1;
        for(int i =0;i<n;i++){
            if(v[i]!=i+1){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<0<<endl;
            continue;
        }

        int x = v[0],y=v[n-1];
        if(x==1||y==n){
            cout<<1<<endl;
            continue;
        }
        else if(x==n&&y==1){
            cout<<3<<endl;
            continue;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}