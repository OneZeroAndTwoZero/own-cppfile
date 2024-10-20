#include<bits/stdc++.h>
using namespace std;

string s;
stack<int> a;
int f[10005] = {0};

long long dfs(int l,int r){
    // cout << l << ";;;" << r << endl;
    if(l >= r) return 0LL;
    long long res = 0;
    int pos = 0;
    if(s[l] == 'b' || s[l] == 'f' && s[l + 1] == 'd'){
        for(int i = l + 3;s[i] != ')' && i <= r;i ++){
            res = res * 10 + (s[i] - '0');
            pos = i;
        }
        if(s[l] == 'b') res *= -1;
        res += dfs(pos + 2,r);
    }else if(s[l] == 'f'){
        for(int i = l + 4;s[i] != '|' && i <= r;i ++){
            res = res * 10 + (s[i] - '0');
            pos = i;
        }
        res *= dfs(pos + 2,f[l + 3] - 1);
        res += dfs(f[l + 3] + 1,r);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(s[i] == '{') a.push(i);
        else if(s[i] == '}'){
            f[a.top()] = i;
            f[i] = a.top();
            a.pop();
        }
    }
    printf("%lld\n",abs(dfs(0,s.size() - 1)));

	return 0;
}