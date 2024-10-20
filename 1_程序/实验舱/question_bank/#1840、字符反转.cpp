#include<bits/stdc++.h>
using namespace std;

int n,m,l = -2,r = -2;
string s;
char tem[100005];

void operate(int l,int r){
    if(l >= r) return;
    for(int i = l;i <= r;i ++){
        tem[i] = s[i];
    }
    for(int i = l;i <= r;i ++){
        s[r - i + l] = tem[i];
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> s;
    while(m --){
        l = r + 2;
        cin >> r;
        r -= 2;
        operate(l,r);
    }
    operate(r + 2,n - 1);
    cout << s << "\n";

    return 0;
}