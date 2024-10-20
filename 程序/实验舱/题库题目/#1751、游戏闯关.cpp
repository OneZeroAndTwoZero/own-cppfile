#include<bits/stdc++.h>
using namespace std;

int n,pos = 0,ans = 0;
long long t,a[100005],b[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %lld",&n,&t);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        a[i] += a[i - 1];
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&b[i]);
        b[i] += b[i - 1];
    }
    for(int i = n;i >= 0;i --){
        while(pos <= n && a[i] + b[pos] <= t){
            ans = max(ans,i + pos);
            pos ++;
        }
    }
    printf("%d\n",ans);

	return 0;
}