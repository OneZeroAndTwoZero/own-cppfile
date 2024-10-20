#include<bits/stdc++.h>
using namespace std;

int n,x,now_deep = 1,now = 1,max_i;
long long cnt[105] = {0},max_ = -1e10;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&x);
        cnt[now_deep] += x;
        if(i == now){
            if(cnt[now_deep] > max_){
                max_ = cnt[now_deep];
                max_i = now_deep;
            }
            now = min(now * 2 + 1,n);
            now_deep ++;
        }
    }
    printf("%d\n",max_i);

	return 0;
}