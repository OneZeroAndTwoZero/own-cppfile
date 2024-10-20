#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
string s[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0;i < n;i ++){
        cin >> s[i];
        bool p = 0;
        for(int j = 0;j < m;j ++){
            if(s[i][j] != '.'){
                p = !p;
                ans ++;
            }else{
                ans += p * 2;
            }
        }
    }
    cout << (ans >> 1) << "\n";

	return 0;
}