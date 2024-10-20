#include<bits/stdc++.h>
using namespace std;

int T,n;
string s;
int cnt[131];
bool vis[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T >> n;
    while(T --){
        cin >> s;
        memset(cnt,0,sizeof(cnt));
        memset(vis,0,sizeof(vis));
        for(auto && i : s) cnt[i] ++;
        for(int i = 0;i < s.size();i ++){
            if(cnt[s[i]] > 1) vis[i] = 1;
        }
        bool ans = 1;
        for(int i = 1;i < s.size();i ++){
            if(!(vis[i] ^ vis[i - 1])){
                ans = 0;
                break;
            }
        }
        if(ans) printf("T\n");
        else printf("F\n");
    }

    return 0;
}