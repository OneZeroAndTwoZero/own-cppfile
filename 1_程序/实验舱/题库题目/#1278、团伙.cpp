#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int p,x,y;
int f[1005];
vector<int> nofriend[1005];

void __init(){
    for(int i = 1;i <= n;i ++)
        f[i] = i;
}

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void add(int x,int y){
    f[find(x)] = f[find(y)] = find(x);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    __init();
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&p,&x,&y);
        if(p == 0){
            add(x,y);
        }else{
            for(auto && j : nofriend[x]) add(j,y);
            for(auto && j : nofriend[y]) add(j,x);
            nofriend[x].push_back(y);
            nofriend[y].push_back(x);
        }
    }
    for(int i = 1;i <= n;i ++)
        ans += f[i] == i;
    printf("%d\n",ans);

	return 0;
}