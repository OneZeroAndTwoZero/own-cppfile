#include<bits/stdc++.h>
using namespace std;

int n,m;
int k[25],p[25];
long long pow_[155][55],ans;
unordered_map<long long,int> f;

void erg(int r,long long sum){
    if(r == n / 2){
        // cout << sum << "\n";
        f[sum] += 1;
        return;
    }
    for(int i = 1;i <= m;i ++){
        // cout << i << " " << k[r] << " " << p[r] << " " << pow_[i][p[r]] << "\n";
        erg(r + 1,sum + k[r] * pow_[i][p[r]]);
    }
}

void dfs(int r,long long sum){
    if(r == n){
        ans += f[-1 * sum];
        return;
    }
    for(int i = 1;i <= m;i ++){
        dfs(r + 1,sum + k[r] * pow_[i][p[r]]);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&k[i],&p[i]);
    }
    // cout << "[][]\n";
    for(int i = 1;i <= m;i ++){
        pow_[i][0] = 1;
        for(int j = 1;j <= 50;j ++){
            pow_[i][j] = pow_[i][j - 1] * i;
            // cout << i << " " << j << " " << pow_[i][j] << "[]\n";
            if(pow_[i][j] > (long long)1e10){
                break;
            }
        }
    }
    // cout << ";;;\n";
    erg(0,0);
    dfs(n / 2,0);
    printf("%lld\n",ans);

	return 0;
}