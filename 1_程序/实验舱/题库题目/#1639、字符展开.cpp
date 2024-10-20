#include<bits/stdc++.h>
using namespace std;

string s,ans;
int f[205] = {0};
stack<int> a;

void dfs(int l,int r){
    int res = 0;
    for(int i = l;i <= r;i ++){
        if(s[i] >= '0' && s[i] <= '9'){
            res = res * 10 + (s[i] - '0');
        }else if(s[i] == '['){
            for(int j = 0;j < res;j ++){
                dfs(i + 1,f[i] - 1);
            }
            res = 0;
            i = f[i];
        }else{
            ans.push_back(s[i]);
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++)
        if(s[i] == '[') a.push(i);
        else if(s[i] == ']') f[a.top()] = i,a.pop();
    dfs(0,s.size() - 1);
    cout << ans << "\n";

	return 0;
}