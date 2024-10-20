#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
bool vis[10000007];
int phi[2000006];
int euler[10000007];
long long ans = 0;

void Olashai(int n){
    for(int i = 2;i <= n;i ++){
        if(!vis[i]){
            phi[pos ++] = i;
            euler[i] = i - 1;
        }
        for(int j = 0;j < pos && i * phi[j] <= n;j ++){
            vis[i * phi[j]] = 1;
            if(i % phi[j]) euler[i * phi[j]] = euler[i] * euler[phi[j]];
            else{
                euler[i * phi[j]] = euler[i] * (euler[phi[j]] + 1);
                break;
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&n);
    Olashai(n);
    for(int i = 2;i <= n;i ++){
        ans += euler[i];
    }
    printf("%lld\n",ans);

    return 0;
}
