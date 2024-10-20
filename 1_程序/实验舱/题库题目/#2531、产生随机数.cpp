#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int cnt[10005] = {0};

int operate(int x){
    return ((x * x) / 100) % 10000;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%d",&n)){
        if(n == 0) return 0;
        memset(cnt,0,sizeof(cnt));
        ans = 1,cnt[n] = 1;
        while(1){
            n = operate(n);
            if(cnt[n]) break;
            else cnt[n] ++,ans ++;
        }
        printf("%d\n",ans);
    }

	return 0;
}