#include<bits/stdc++.h>
using namespace std;

int T,n,pos = 0;
bool vis[1000006];
int phi[1000006];
long long euler[1000006];

void Olashai(int n){
    for(int i = 2;i <= n;i ++){
        if(!vis[i]){
            euler[i] = i - 1;
            phi[pos ++] = i;
        }
        for(int j = 0;j < pos && i * phi[j] <= n;j ++){
            vis[i * phi[j]] = 1;
            if(i % phi[j] == 0){
                euler[i * phi[j]] = euler[i] * (euler[phi[j]] + 1);
                break;
            }else{
                euler[i * phi[j]] = euler[i] * euler[phi[j]];
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
    
    scanf("%d",&T);
    euler[1] = 1;
    Olashai(1000000);
    for(int i = 2;i <= 1000000;i ++){
        euler[i] += euler[i - 1];
    }
    while(T --){
        scanf("%d",&n);
        printf("%lld\n",1 + 2 * euler[n]);
    }

    return 0;
}
