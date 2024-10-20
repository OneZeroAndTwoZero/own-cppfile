#include<bits/stdc++.h>
using namespace std;

int n,k,u,v;
int f[1005] = {0};
map<int,int> cnt;
int num = 0,maxn = 0;

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        f[i] = i;
    }
    for(int i = 0;i < k;i ++){
        scanf("%d %d",&u,&v);
        f[find(u)] = find(v);
    }
    for(int i = 1;i <= n;i ++){
        cnt[find(i)] ++;
    }
    map<int,int> :: iterator it;
    for(it = cnt.begin();it != cnt.end();it ++){
        if(it -> second != 0) num ++;
        maxn = max(maxn,it -> second);
    }
    printf("%d %d\n",num,maxn);

	return 0;
}
