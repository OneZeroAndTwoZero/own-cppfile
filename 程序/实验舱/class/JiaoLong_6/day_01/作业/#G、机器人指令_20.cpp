#include<bits/stdc++.h>
using namespace std;

int n;
long long ex,ey;
long long curx[105],cury[105];
map<pair<long long,long long>,int> f[105];
long long ans[105];

void erg(int r,int st,long long movex,long long movey){
    if(r == n / 2){
        // cout << st << ";;" << movex << " " << movey << "\n";
        f[st][{movex,movey}] += 1;
        return;
    }
    erg(r + 1,st,movex,movey);
    erg(r + 1,st + 1,movex + curx[r],movey + cury[r]);
}

void dfs(int r,int st,long long movex,long long movey){
    if(r == n){
        for(int i = st;i <= n;i ++){
            // cout << st << "[]]" << movex << " " << movey << "\n";
            // cout << f[i - st][{-1 * movex,-1 * movey}] << ";;;\n";
            ans[i] += f[i - st][{-1 * movex,-1 * movey}];  
        }
        return;
    }
    dfs(r + 1,st,movex,movey);
    dfs(r + 1,st + 1,movex + curx[r],movey + cury[r]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    scanf("%lld %lld",&ex,&ey);
    for(int i = 0;i < n;i ++){
        scanf("%lld %lld",&curx[i],&cury[i]);
    }
    erg(0,0,-1 * ex,-1 * ey);
    dfs(n / 2,0,0,0);
    for(int i = 1;i <= n;i ++){
        printf("%lld\n",ans[i]);
    }

	return 0;
}