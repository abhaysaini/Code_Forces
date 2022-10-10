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
        map<int,int>m;
        for(int i =0;i<v.size();i++){
            m[v[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto it:m){
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end(),greater<int>());
        int x = p[0].second;
        
        int u=0,y=0;
        for(int i =0;i<v.size();i++){
            if(x==v[i]){
                if(i!=0){
                    u=v[i-1];
                }
                while(x==v[i+1]){
                    i++;
                }
                y=v[i+1];
            }
        }

        if(p[0].first>=3){
            cout<<0<<endl;
        }
        else if(p[0].first==2){
            cout<<min(x-u,y-x)<<endl;
        }
        else if(p[0].first==1){
            int size=INT_MAX;
            for(int i =0;i<v.size()-2;i++){
                int sum = v[i+1]-v[i]+v[i]-v[i-1];
                size=min(sum,size);
            }
            cout<<size<<endl;
        }
        else{
            cout<< -1<<endl;
        }
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