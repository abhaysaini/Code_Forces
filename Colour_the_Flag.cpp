#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            // 0 -> 'R'
            // 1 -> 'W'
            // -1 -> '.'
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '.')
                {
                    arr[i][j] = -1;
                }
                else if (s[j] == 'R')
                {
                    arr[i][j] = 0;
                }
                else
                {
                    arr[i][j] = 1;
                }
            }
        }

        int arr1[m][n];
        int arr2[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i % 2 == 0 && j % 2 == 1)
                {
                    arr1[i][j] = 1;
                }
                else if (i % 2 == 0 && j % 2 == 0)
                {
                    arr1[i][j] = 0;
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    arr1[i][j] = 1;
                }
                else
                {
                    arr1[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i % 2 == 0 && j % 2 == 1)
                {
                    arr2[i][j] = 0;
                }
                else if (i % 2 == 0 && j % 2 == 0)
                {
                    arr2[i][j] = 1;
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    arr2[i][j] = 0;
                }
                else
                {
                    arr2[i][j] = 1;
                }
            }
        }


        int flag1 = 1, flag2 = 1;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(arr[i][j]!= arr1[i][j] && arr[i][j]!=-1){
                    flag1 = 0;
                    break;
                }
            }
        }
        if(flag1){
            cout<<"Yes"<<endl;
            for(int i =0;i<m;i++){
                for(int j =0;j<n;j++){
                    if(arr1[i][j]==1){
                        cout<<'W';
                    }
                    else{
                        cout<<'R';
                    }
                }
                cout<<endl;
            }
            continue;
        }

        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(arr[i][j]!= arr2[i][j] && arr[i][j]!=-1){
                    flag2 = 0;
                    break;
                }
            }
        }
        if( flag2){
            cout<<"Yes"<<endl;
             for(int i =0;i<m;i++){
                for(int j =0;j<n;j++){
                    if(arr2[i][j]==1){
                        cout<<'W';
                    }
                    else{
                        cout<<'R';
                    }
                }
                cout<<endl;
            }
        }

        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}