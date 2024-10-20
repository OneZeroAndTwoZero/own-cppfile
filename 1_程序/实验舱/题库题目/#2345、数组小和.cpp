#include<bits/stdc++.h>
using namespace std;

int n,t,cur = 105;
long long cnt[255],ans;

void add(int x){
    for(int i = x + cur;i <= 250;i ++)
        cnt[i] += x;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        ans += cnt[t + cur];
        add(t);
    }
    printf("%lld\n",ans);

	return 0;
}