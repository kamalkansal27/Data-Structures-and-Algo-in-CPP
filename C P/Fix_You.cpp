#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        char arr[n][m];
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(i == n - 1){
                    if(arr[i][j] == 'D') ans++;
                }
                else if(j == m - 1){
                    if(arr[i][j] == 'R') ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}