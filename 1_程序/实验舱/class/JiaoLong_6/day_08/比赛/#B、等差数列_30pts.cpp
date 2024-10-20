#include<bits/stdc++.h>
using namespace std;

int n,q,s,t;
long long a,b;
long long v[100006];
string op;

int operate(int l,int r){
    int res = 1;
    long long now = 1145141919810;
    for(int i = l + 1;i <= r;i ++){
        if(now == 1145141919810){
            now = v[i] - v[i - 1];
        }else{
            if(v[i] - v[i - 1] != now){
                now = 1145141919810;
                res ++;
            }
        }
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

    cin >> n;
    for(int i = 1;i <= n;i ++){
        cin >> v[i];
    }
    cin >> q;
    while(q --){
        cin >> op;
        if(op == "A"){
            cin >> s >> t >> a >> b;
            for(int i = s;i <= t;i ++){
                v[i] += a;
                a += b;
            }
        }else{
            cin >> s >> t;
            cout << operate(s,t) << "\n";
        }
    }

	return 0;
}