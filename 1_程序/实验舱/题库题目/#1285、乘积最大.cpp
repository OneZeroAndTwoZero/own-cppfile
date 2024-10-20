#include<bits/stdc++.h>
using namespace std;

int n,k;
string s;
long long ans;

void dfs(int pos,int num,long long sum,long long now){
    if(pos == n){
        if(num == k)
            ans = max(ans,sum * now);
        return;
    }
    dfs(pos + 1,num,sum,now * 10 + (s[pos] - '0'));
    if(pos != 0) dfs(pos + 1,num + 1,sum * now,s[pos] - '0');
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n >> k >> s;
    dfs(0,0,1,0);
    printf("%lld\n",ans);

	return 0;
}