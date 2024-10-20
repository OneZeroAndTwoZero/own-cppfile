#include<bits/stdc++.h>
using namespace std;

int l,r,ans = 0;

int operate(int x){
    int t = x,res = 0;
    for(int i = 0;i < 4;i ++){
        res = res * 10 + (t % 10);
        t /= 10;
    }
    res += x * 10000;
    return res;
}

bool check(int x){
    int y = x / 10000,m = (x / 100) % 100,d = x % 100;
    if(d < 1 || m < 1 || m > 12) return 0;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d > 31) return 0;
    }else if(m != 2){
        if(d > 30) return 0;
    }else{
        // month 2 has 29 days!!!
        if(d > 29) return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&l,&r);
    for(int i = 1000;i < 10000;i ++){
        if(check(operate(i))){
            if(operate(i) >= l && operate(i) <= r){
                ans ++;
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}