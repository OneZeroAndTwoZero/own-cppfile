#include<bits/stdc++.h>
using namespace std;

int n,m,t,ans = 0;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    a[0] = -0x3f3f3f3f,a[m + 1] = 0x3f3f3f3f;
    for(int i = 1;i <= m;i ++)
        scanf("%d",&a[i]);
    sort(a + 1,a + m + 1);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        int pos = lower_bound(a + 1,a + m + 1,t) - a;
        ans += min(abs(a[pos] - t),abs(a[pos - 1] - t));
    }
    printf("%d\n",ans);

	return 0;
}