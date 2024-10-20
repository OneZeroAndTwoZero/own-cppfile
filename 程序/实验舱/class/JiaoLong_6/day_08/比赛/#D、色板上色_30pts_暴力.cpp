#include<bits/stdc++.h>
using namespace std;

int l,t,o;
int a,b,x;
int v[100005];
string op;

void solve1(int l,int r,int x){
    for(int i = l;i <= r;i ++){
        v[i] = x;
    }
}

int solve2(int l,int r){
    int res = 0,cnt[35] = {0};
    for(int i = l;i <= r;i ++){
        cnt[v[i]] ++;
    }
    for(int i = 0;i <= 30;i ++){
        if(cnt[i]) res ++;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l >> t >> o;
    for(int i = 1;i <= l;i ++){
        v[i] = 1;
    }
    while(o --){
        cin >> op;
        if(op == "C"){
            cin >> a >> b >> x;
            solve1(a,b,x);
        }else{
            cin >> a >> b;
            cout << solve2(a,b) << "\n";
        }
    }

	return 0;
}