#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem = n%3;
        if(rem==0){
            cout<<n/3<<" "<<"0 0"<<endl;
        }
        else if(rem==1 &&n>=7){
            cout<<n/3-2<<" "<<"0 1"<<endl;
        }
        else if(rem==2&&n>=5){
            cout<<n/3-1<<" "<<"1 0"<<endl;
        }
        else{
            cout<< -1<<endl;
        }
    }
    return 0;
}