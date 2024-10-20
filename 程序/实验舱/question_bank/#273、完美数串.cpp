#include<bits/stdc++.h>
using namespace std;

int n,k;
string s;
int cnt[105];
int minn = 0x3f3f3f3f,minpos;

int operate(int x){
    int t[105] = {0};
    for(int i = 0;i < n;i ++){
        t[abs((s[i] - '0') - x)] ++;
    }
    int num = k - t[0],p = 1,res = 0;
    while(num > 0){
        res += min(num,t[p]) * p;
        num -= t[p];
        p ++;
    }
    return res;
}

void update1(int x){
    if(x < 0 || x > 9) return;
    for(int i = 0;i < n && k > 0;i ++){
        if(s[i] == '0' + x){
            k --;
            s[i] = '0' + minpos;
        }
    }
}

void update2(int x){
    if(x < 0 || x > 9) return;
    for(int i = n - 1;i >= 0 && k > 0;i --){
        if(s[i] == '0' + x){
            k --;
            s[i] = '0' + minpos;
        }
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

    cin >> n >> k;
    cin >> s;
    for(int i = 0;i < n;i ++){
        cnt[s[i] - '0'] ++;
    }
    for(int i = 0;i < 10;i ++){
        int cur = operate(i);
        if(cur < minn){
            minn = cur;
            minpos = i;
        }
    }
    cout << minn << "\n";
    k -= cnt[minpos];
    for(int i = 1;i <= 10;i ++){
        update1(minpos + i);
        update2(minpos - i);
    }
    cout << s << "\n";

    return 0;
}