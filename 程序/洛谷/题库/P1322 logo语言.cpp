#include<bits/stdc++.h>
using namespace std;

long long ans = 0;
string s;

long long dfs(int l,int r){
    if(l >= r) return 0LL;
    long long res = 0;
    int pos = 0;
    if(s[l] == 'F'){
        for(int i = l + 3;s[i] != ' ' && i <= r;i ++){
            res = (res << 1) + (res << 3) + (s[i] - '0');
            pos = i;
        }
        res += dfs(pos + 2,r);
    }else if(s[l] == 'B'){
        for(int i = l + 3;s[i] != ' ' && i <= r;i ++){
            res = (res << 1) + (res << 3) + (s[i] - '0');
            pos = i;
        }
        res *= -1;
        res += dfs(pos + 2,r);
    }else{
        for(int i = l + 7;s[i] != '[' && i <= r;i ++){
            res = (res << 1) + (res << 3) + (s[i] - '0');
            pos = i;
        }
        res = dfs(pos + 2,r - 1) * res;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    getline(cin,s);
    ans = abs(dfs(0,s.size() - 1));
    cout << ans << "\n";

	return 0;
}