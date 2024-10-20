#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
int f[100005] = {0};
int a,b;

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    ans = n;
    for(int i = 1;i <= n;i ++) f[i] = i;
    while(m --){
        scanf("%d %d",&a,&b);
        ans -= find(a) != find(b);
        f[find(a)] = f[find(b)] = min(find(a),find(b));
    }
    printf("%d\n",ans);
    for(int i = 1;i <= n;i ++)
        if(f[i] == i) printf("%d ",i);
    printf("\n");

	return 0;
}