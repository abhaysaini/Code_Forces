// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int m, n;
//         cin >> m >> n;
//         string s;
//         cin >> s;
//         vector<pair<char, int>> v;
//         for (int i = 0; i < m; i++)
//         {
//             char x = s[i];
//             int count = 1;
//             while (x == s[i + 1])
//             {
//                 count++;
//                 i++;
//             }
//             v.push_back({x, count});
//         }
//         // for(auto it:v){
//         //     cout<<it.first<<" "<<it.second<<endl;
//         // }
//         // cout<<endl;

//         // finding the index

//         int maxi = 0, index = 0, i = 0;
//         for (auto it : v)
//         {
//             if (it.first == 'B')
//             {
//                 index += i;
//                 maxi = max(maxi, it.second);
//             }
//             i += it.second;
//         }
//         // cout<<index<<endl;

//         int count = 0, length = 0;
//         while (length != n)
//         {
//             if (s[index] == 'B')
//             {
//                 length++;
//             }
//             else if (s[index] == 'W')
//             {
//                 count++;
//                 length++;
//             }
//         }
//         cout << index << " " << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    char x = 'a';
    cout<<x<<endl;
}