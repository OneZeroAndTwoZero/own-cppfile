#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 0,ans = 0;
int a[100005];
int v[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    for(int i = 0;i < m;i ++)
        scanf("%d",&v[i]);
    sort(a,a + n);
    sort(v,v + m);
    for(int i = 0;i < n;i ++){
        while(v[pos] < a[i] && pos < m)
            ++ pos;
        if(v[pos] < a[i]){
            printf("-1\n");
            return 0;
        }
        ans += v[pos],++ pos;
    }
    printf("%d\n",ans);

	return 0;
}