#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i =n-2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n;
        }
        else{
            cout<<1<<" "<<2<<" "<<3<<" ";
            for(int i =n-2;i>=4;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n;
        }
        cout<<endl;
    }
    return 0;
}