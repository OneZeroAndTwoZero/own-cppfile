#include<bits/stdc++.h>
using namespace std;

long long l,r;
long long ans1,ans2,cur1 = 1,num1,cur2 = 1,num2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld",&l,&r);
    while(cur1 <= r / 5){
        num1 ++;
        cur1 *= 5;
        long long t = (r / cur1) * cur1;
        if(t >= l && t <= r){
            ans1 = num1;
        }
    }
    while(cur2 <= r / 2){
        num2 ++;
        cur2 *= 2;
        long long t = (r / cur2) * cur2;
        if(t >= l && t <= r){
            ans2 = num2;
        }
    }
    printf("%lld\n",min(ans1,ans2));

    return 0;
}