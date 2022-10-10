#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        string p = s.substr(0,3);
        string q = s.substr(3,3);
        
        
        int sum1=0,sum2=0;
        for(int i =0;i<p.length();i++){
            sum1+=p[i]-48;
        }
        for(int i =0;i<q.length();i++){
            sum2+=q[i]-48;
        }
        
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}