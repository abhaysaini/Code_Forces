#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v,v1;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }



        // ==========CASE 3 ==================

        int flag3 = 1;
        for(int i =0;i<n;i++){
            if(v[i]!=v1[i]){
                flag3 = 0;
                break;
            }
        }
        if(flag3){
            cout<<"Yes"<<endl;
            continue;
        }

        // ============== CASE 1 =============
        int flag = 1;
        for(int i =0;i<n;i++){
            if(v1[i]>v[i]){
                flag =0;
                break;
            }
        }
        if(!flag){
            cout<<"No"<<endl;
            continue;
        }



        // ==============  CASE 2 ================
        int x = *max_element(v.begin(),v.end()),y=0;
        for(int i =0;i<n;i++){
            if(x==v[i]){
                y=i;
                break;
            }
        }
        int diff = v[y]-v1[y];


        for(int i =0;i<n;i++){
            v[i]=v[i]-diff;
            if(v[i]<0){
                v[i]=0;
            }
        }

        int flag2 = 1;
        for(int i =0;i<n;i++){
            if(v[i]!=v1[i]){
                flag2 = 0;
                break;
            }
        }

        if(flag2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}