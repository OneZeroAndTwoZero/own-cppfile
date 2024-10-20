#include<bits/stdc++.h>
using namespace std;


int n,ans = 0;
bool cnt[5000006] = {0};
int a[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++) scanf("%d",&a[i]);
    for(int i = 0;i < n;i ++)
        for(int j = i + 1;j < n;j ++)
            cnt[a[i] + a[j]] = 1;
    for(int i = 0;i < n;i ++) ans += cnt[a[i]];
    printf("%d\n",ans);

	return 0;
}