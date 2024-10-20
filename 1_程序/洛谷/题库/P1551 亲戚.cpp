#include<bits/stdc++.h>
using namespace std;

int n,m,q,a,b;
int f[100005];

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

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i <= n;i ++) f[i] = i;
    while(m --){
        scanf("%d %d",&a,&b);
        f[find(a)] = f[find(b)] = find(a);
    }
    while(q --){
        scanf("%d %d",&a,&b);
        if(find(a) == find(b)) printf("Yes\n");
        else printf("No\n");
    }

	return 0;
}
