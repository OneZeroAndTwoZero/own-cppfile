#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

unsigned long long temp;
unsigned int cnt,x;
long long ans1 = 0,ans2 = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> temp >> x;
    cnt = temp;
    unsigned int cur = cnt;
    cnt %= 8;
    if(cnt == 0) cnt = 8;
    if(x == 0) x = 8;
    if(x == -1){
        ans1 = (unsigned int)((cur + 7) / 8);
        if(ans1 == 0){
            ans1 = (1LL << 32) + 1;
            ans2 += ans1 * 8;
        }
        ans2 += cur;
    }else if(cnt == x){
        ans2 = ans1 = 1;
    }else if(cnt > x){
        ans2 = cnt - x + 1,ans1 = 1;
    }else{
        ans2 = cnt + (8 - x + 1);
        ans1 = 2;
        if((cur + 7) / 8 < 2){
            ans2 -= (8 - x + 1),ans1 = 1;
        }
    }
    cout << ans1 << " " << ans2 << "\n";

    return 0;
}