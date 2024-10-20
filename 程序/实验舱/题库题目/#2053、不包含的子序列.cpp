#include<bits/stdc++.h>
using namespace std;

int n,k,t,num = 0,ans = 0;
int cnt[10005];

void __init(){
    num = 0;
    for(int i = 0;i <= k;i ++){
        cnt[i] = 0;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        num += !cnt[t];
        cnt[t] ++;
        if(num == k){
            ++ ans;
            __init();
        }
    }
    printf("%d\n",++ ans);

	return 0;
}