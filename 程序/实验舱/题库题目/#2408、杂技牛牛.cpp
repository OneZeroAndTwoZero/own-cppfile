#include<bits/stdc++.h>
using namespace std;

struct node{
    long long wi,si;
    bool operator < (const node &a) const{
        return wi + si < a.wi + a.si;
    }
};

int n;
long long w = 0,ans = 0;
node a[500005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld %lld",&a[i].wi,&a[i].si);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        ans = max(ans,w - a[i].si);
        w += a[i].wi;
    }
    printf("%lld\n",ans);

	return 0;
}