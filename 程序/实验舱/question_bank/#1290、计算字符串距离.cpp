#include<bits/stdc++.h>
using namespace std;

string a,b;
int dp[2005][2005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    for(int i = 0;i <= a.size();i ++){
        for(int j = 0;j <= b.size();j ++){
            if(i == 0){
                dp[i][j] = j;
            }else if(j == 0){
                dp[i][j] = i;
            }else{
                if(a[i - 1] == b[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }else{
                    dp[i][j] = min({dp[i - 1][j],dp[i][j - 1],dp[i - 1][j - 1]}) + 1;
                }
            }
        }
    }
    cout << dp[a.size()][b.size()] << "\n";

    return 0;
}