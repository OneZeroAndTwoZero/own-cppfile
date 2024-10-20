#include<bits/stdc++.h>
using namespace std;

int f[128],ans;
string e = "abcdefghijklmnopqrstuvwxyz",g;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> g;
    for(int i = 0;i < 26;i ++){
        f[g[i]] = i;
    }
    for(int i = 'a';i <= 'z';i ++){
        ans += abs((i - 'a') - f[i]);
    }
    printf("%d\n",ans);

	return 0;
}