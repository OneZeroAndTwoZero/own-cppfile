#include<bits/stdc++.h>
using namespace std;

int n,k,t,num,ans,pos;
int cnt[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        num += !cnt[t];
        ++ cnt[t];
    }
    sort(cnt,cnt + 200005);
    while(num > k){
        ans += cnt[++ pos];
        num -= (cnt[pos] != 0);
    }
    printf("%d\n",ans);

	return 0;
}