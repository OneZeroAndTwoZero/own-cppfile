#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,q;
string s;
char c,d;
int u,v;
vector<int> a[135];
int f[131];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s >> q;
    for(int i = 'a';i <= 'z';i ++) a[i].push_back(i);
    while(q --){
        cin >> c >> d;
        u = c,v = d;
        if(u == v) continue;
        // cout << u << " " << v << "\n";
        for(auto && i : a[u]){
            a[v].push_back(i);
        }
        a[u].clear();
    }
    for(int i = 'a';i <= 'z';i ++){
        for(auto && k : a[i]){
            f[k] = i;
        }
    }
    // for(int i = 'a';i <= 'z';i ++){
    //     cout << (char)i << " " << (char)f[i] << "\n";
    // }
    for(auto && i : s){
        i = f[i];
    }
    cout << s << "\n";

    return 0;
}