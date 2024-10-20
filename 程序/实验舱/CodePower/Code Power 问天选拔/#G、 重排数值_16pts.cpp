#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

string s;
int cnt[15];

bool check(int x){
    unordered_map<int,int> f;
    while(x){
        f[x % 10] ++;
        x /= 10;
    }
    for(int i = 0;i < 10;i ++){
        if(cnt[i] != f[i]) return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for(auto && i : s){
        cnt[i - '0'] ++;
    }
    for(int i = 1;;i ++){
        if(check(i)){
            if(i % 7) continue;
            cout << i << "\n";
            return 0;
        }
    }

    return 0;
}