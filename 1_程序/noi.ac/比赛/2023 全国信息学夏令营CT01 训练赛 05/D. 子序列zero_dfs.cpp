#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0};
int l,r;
long long ans = 0;

void dfs(int k,int sum){
    if(k == r + 1){
        if(sum == 0){
            ans ++;
        }
        return;
    }
    dfs(k + 1,sum - a[k]);
    dfs(k + 1,sum + a[k]);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(l = 0;l < n;l ++){
        for(r = l;r < n;r ++){
            dfs(l,0);
        }
    }
    printf("%lld\n",ans);

	return 0;
}