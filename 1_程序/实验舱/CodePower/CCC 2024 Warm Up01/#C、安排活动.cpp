#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,maxn = -1000;
string s;
int a[15];
bool ok = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n --){
        cin >> s;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'Y') a[i + 1] ++;
        }
    }
    for(int i = 1;i <= 5;i++){
        maxn = max(maxn,a[i]);
    }
    for(int i = 1;i <= 5;i++){
        if(a[i] == maxn){
            if(!ok) ok = 1;
            else cout << ",";
            cout << i;
        }
    }
    cout << "\n";

    return 0;
}

