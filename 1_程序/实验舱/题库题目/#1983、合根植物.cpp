#include<bits/stdc++.h>
using namespace std;

int n,m,k,ans;
int a,b;
int f[1000006] = {0};

int find(int x){
    if(x == f[x]) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    ans = n * m;
    for(int i = 1;i <= n * m;i ++)
        f[i] = i;
    scanf("%d",&k);
    while(k --){
        scanf("%d %d",&a,&b);
        if(find(a) == find(b)) continue;
        else ans -= 1,f[find(a)] = f[find(b)] = find(a);
    }
    printf("%d\n",ans);

	return 0;
}