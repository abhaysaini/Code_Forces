#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = n,x=0;
        n--;
        while(n--){
            ans = ans&n;
            if(ans==0){
                x=n;
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}