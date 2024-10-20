#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
int cnt[500005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        ++ cnt[u],++ cnt[v];
    }
    for(int i = 1;i <= n;i ++)
        printf("%d\n",cnt[i]);

	return 0;
}