#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
bool vis[10000005];
int pri[3000006];
double ans;

void olashai(int x){
    for(int i = 2;i <= x;i ++){
        if(!vis[i]) pri[pos ++] = i;
        for(int j = 0;j < pos && pri[j] * i <= x;j ++){
            vis[i * pri[j]] = 1;
            if(i % pri[j] == 0) break;
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
    olashai(n);
    ans = fabs(((double) n / log(n)) - pos) / pos;
    printf("%.5lf\n",ans * 100.0);

    return 0;
}