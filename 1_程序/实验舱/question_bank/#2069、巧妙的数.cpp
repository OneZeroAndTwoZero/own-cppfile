#include<bits/stdc++.h>
using namespace std;

int div(string a,int b){
    int yu = 0;
    for(int i = 0;i < a.size();i ++){
        yu = yu * 10 + (a[i] ^ '0');
        yu %= b;
    }
    return yu;
}

string n;
bool vis[15];
bool ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin >> n){
        ans = 1;
        for(int i = 0;i <= 10;i ++) vis[i] = 0;
        for(int i = 0;i < n.size();i ++){
            vis[n[i] ^ '0'] = 1;
        }
        for(int i = 1;i < 10 && ans;i ++){
            if(vis[i] == 0) continue;
            if(div(n,i)) ans = 0;
        }
        if(ans) cout << "clever\n";
        else cout << "not clever\n";
    }

    return 0;
}