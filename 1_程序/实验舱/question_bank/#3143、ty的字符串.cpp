#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
string s;
unordered_map<string,int> cnt;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    for(int i = 1;i < s.size();i ++){
        cnt[s.substr(i - 1,2)] ++;
    }
    for(auto && i : cnt){
        ans = max(ans,i.second);
    }
    printf("%d\n",ans);

    return 0;
}