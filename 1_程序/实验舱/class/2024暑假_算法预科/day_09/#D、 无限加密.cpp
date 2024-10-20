#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long n;
int cur = 0;
string s;

char operate(int k,long long x){ // (1 << k)times,pos:x
    if(k == 0){
        // cout << x << "[]\n";
        return s[x - 1];
    }
    if(x > s.size() * (1LL << (k - 1))){
        x -= s.size() * (1LL << (k - 1));
        x --;
        if(x == 0) x = s.size() * (1LL << (k - 1));
    }
    return operate(k - 1,x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> n;
    while(s.size() * (1LL << cur) < n){
        cur ++;
    }
    cout << operate(cur,n) << "\n";

    return 0;
}