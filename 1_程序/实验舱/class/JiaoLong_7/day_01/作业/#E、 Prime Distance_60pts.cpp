#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long l,r;
int pos;
bool vis[10000006];
int phi[10000006];
int f[10000006];

void Euler(int n){
    for(int i = 2;i <= n;i ++){
        if(!vis[i]){
            phi[pos ++] = i;
        }
        for(int j = 0;j < pos && i * phi[j] <= n;j ++){
            vis[i * phi[j]] = 1;
            if(i % phi[j] == 0) break;
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

    while(~scanf("%lld %lld",&l,&r)){
        pos = 0;
        for(int i = l;i <= r;i ++){
            f[i - l] = 0;
        }
        Euler(sqrt(r) + 10);
        for(int i = 0;i < pos;i ++){
            for(int j = max(l  / phi[i],2LL);j * phi[i] <= r;j ++){
                // printf("%d %d %d;;;;\n",j,phi[i],j * phi[i]);
                // cout << j << " " << phi[i] << " " << j * phi[i] - l << endl;
                if(j * phi[i] - l < 0) continue;
                f[j * phi[i] - l] = 1;
            }
        }
        vector<int> a;
        for(int i = l;i <= r;i ++){
            if(f[i - l]) continue;
            a.push_back(i);
        }
        int maxn = -1,maxpos,minn = 1000000,minpos;
        for(int i = 1;i < a.size();i ++){
            if(a[i] - a[i - 1] > maxn){
                maxn = a[i] - a[i - 1];
                maxpos = a[i - 1];
            }
            if(a[i] - a[i - 1] < minn){
                minn = a[i] - a[i - 1];
                minpos = a[i - 1];
            }
        }
        if(maxn != -1){
            printf("%d,%d are closest, %d,%d are most distant.\n",minpos,minpos + minn,maxpos,maxpos + maxn);
        }else{
            printf("There are no adjacent primes.\n");
        }
    }

    return 0;
}