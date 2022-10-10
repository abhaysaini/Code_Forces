#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end(), greater<int>());
//     int x = n;
//     int team = 0, i = 1, j = 0;
//     while (x>0)
//     {
//         if (i * v[j] > m)
//         {
//             team++;
//             x = x - i;
//             j++;
//             i=1;
//         }
//         else
//         {
//             i++;
//             x--;
//         }
//     }
//     cout<<team<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    // if(n*( *max_element(v.begin(),v.end()) <=m)){
    //     cout<<0<<endl;
    //     return 0;
    // }
    sort(v.begin(),v.end(),greater<int>());
    int team=0,flag=1;
    int size=v.size();
    int count=1,i=0;
    while(1){
        if(size<=1){
            break;
        }
        if(count*v[i]>m){
            team++;
            size-=count;
            i++;
            count=1;
        }
        else{
            count++;
        }
    }
    cout<<team<<endl;
    return 0;
}