#include<bits/stdc++.h>
using namespace std;

int cnt[128] = {0},num;
string s,ans = "";

void add(int x){
    if(!cnt[x]) return;
    cnt[x] --,num --;
    ans.push_back('a' + x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    num = s.size();
    for(int i = 0;i < s.size();i ++)
        cnt[s[i] - 'a'] ++;
    while(num){
        for(int i = 0;i < 26;i ++)
            add(i);
        for(int i = 25;i >= 0;i --)
            add(i);
    }
    cout << ans << endl;

	return 0;
}