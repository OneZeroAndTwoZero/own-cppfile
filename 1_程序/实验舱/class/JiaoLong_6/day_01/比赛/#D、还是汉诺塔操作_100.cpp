#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;
char f[128][128];

long long qpow(long long a,int b){
    if(b == 0) return 1;
    long long res = qpow(a,b / 2);
    res *= res;
    if(b & 1) res *= a;
    return res;
}

long long dfs(int k,char t){
    if(k == 0){
        if(t == s[0]) return 0LL;
        else return 1LL;
    }
    if(s[k] == t){
        // cout << k - 1 << " " << c << " " << dfs(k - 1,c) << "\n";
        return dfs(k - 1,t);
    }else{
        // cout << k - 1 << " " << f[s[k]][c] << " " << dfs(k - 1,f[s[k]][c]) << "\n";
        // cout << s[k] << " " << t << " " << f[s[k]][t] << ";;;\n";
        // cout << qpow(2,k) << "[]\n";
        return dfs(k - 1,f[min(s[k],t)][max(s[k],t)]) + qpow(2,k);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    f['A']['B'] = 'C',f['A']['C'] = 'B',f['B']['C'] = 'A';
    cin >> t;
    while(t --){
        cin >> s;
        cout << dfs(s.size() - 1,'C') << "\n";
    }

	return 0;
}