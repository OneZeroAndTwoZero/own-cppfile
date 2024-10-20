#include<bits/stdc++.h>
using namespace std;

struct node{
    int ai,bi;
    bool operator < (const node &a) const{
        return bi > a.bi;
    }
};

int n;
node card[100005];
long long ans,sum;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%d %d",&card[i].ai,&card[i].bi);
    sort(card,card + n);
    for(int i = 0;i <= n;i ++){
        sum += card[i].ai;
        ans = max(ans,sum * card[i].bi);
    }
    printf("%lld\n",ans);

	return 0;
}