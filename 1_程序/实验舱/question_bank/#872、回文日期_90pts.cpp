#include<bits/stdc++.h>
using namespace std;

int l,r,ans;

int operate(int x){
    int t = x,res = 0;
    for(int i = 0;i < 4;i ++){
        res = res * 10 + (t % 10);
        t /= 10;
    }
    res += x * 10000;
    // cout << x << "[]" << res << "\n";
    return res;
}

bool is_run(int x){
    if(x % 400 == 0) return 1;
    if(x % 100 == 0) return 0;
    if(x % 4 == 0) return 1;
    return 0;
}

bool check(int x){
    int y = x / 10000,m = (x / 100) % 100,d = x % 100;
    if(m < 1 || m > 12) return 0;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d < 1 || d > 31) return 0;
    }else if(m != 2){
        if(d < 1 || d > 30) return 0;
    }else{
        if(is_run(x)){
            if(d < 1 || d > 29) return 0;
        }else{
            if(d < 1 || d > 28) return 0;
        }
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&l,&r);
    for(int i = 1;i < 10000;i ++){
        if(check(operate(i))){
            if(operate(i) >= l && operate(i) <= r){
                // cout << operate(i) << ";;\n";
                ans ++;
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}