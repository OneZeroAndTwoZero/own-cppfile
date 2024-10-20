#include<bits/stdc++.h>
using namespace std;

int n;
int v1[100005] = {0};
int v2[100005] = {0};
long long ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&v1[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&v2[i]);
    }
    for(int i = 0;i < n;i ++){
        ans += (long long)v1[i] * v2[i];
    }
    printf("%lld\n",ans);

	return 0;
}