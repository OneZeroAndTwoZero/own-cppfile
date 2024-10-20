#include<bits/stdc++.h>
using namespace std;

int n,k;
long long ex,ey,ans = 0;
long long move_x[55],move_y[55];
unordered_map<long long,int> f[55];

void erg(int r,int num,long long x,long long y){
    if(r == n / 2){
        if(num <= k) f[num][x * 1e9 + y] += 1;
        cout << num << ";;; \n";
        return;
    }
    erg(r + 1,num,x,y);
    erg(r + 1,num + 1,x + move_x[r],y + move_y[r]);
}

void dfs(int r,int num,long long x,long long y){
    if(r == n){
        if(num <= k) ans += f[k - num][x * -1e9 - y];
        cout << num << " " << f[k - num][x * -1e9 - y] << "[]\n";
        return;
    }
    dfs(r + 1,num,x,y);
    dfs(r + 1,num + 1,x + move_x[r],y + move_y[r]);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("../data.in","r",stdin);
//     freopen("../data.out","w",stdout);
// #endif

    scanf("%d %lld %lld",&n,&ex,&ey);
    for(int i = 0;i < n;i ++){
        scanf("%lld %lld",&move_x[i],&move_y[i]);
    }
    for(k = 1;k <= n;k ++){
        for(int j = 0;j < 50;j ++){
            f[j].clear();
        }
        ans = 0;
        f[0][0] = 1;
        erg(0,0,0,0);
        dfs(n / 2,0,0,0);
        printf("%lld\n",ans);
    }

	return 0;
}