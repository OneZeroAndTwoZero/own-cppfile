#include<bits/stdc++.h>
using namespace std;

struct node{
    long long s,t,f;
};

int n,m,q;
long long l,r,x,len;
string s;
node a[105];

char query(long long x){
    if(x <= n) return s[x - 1];
    for(int i = 0;i < m;i ++){
        if(a[i].s > x || a[i].t < x) continue;
        return query(a[i].f + (x - a[i].s));
    }
    return ' ';
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> q;
    cin >> s;
    len = n;
    for(int i = 0;i < m;i ++){
        cin >> l >> r;
        a[i] = {len + 1,len + r - l + 1,l};
        len += r - l + 1;
    }
    while(q --){
        cin >> x;
        cout << query(x) << "\n";
    }

    return 0;
}