#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
int pri[2000006];
bool p[6000007];

void Olashai(int n){
    for(int i = 2;i <= n;i++){
        if(!p[i]){
            pri[pos ++] = i;
            printf("%d ",i);
        }
        for(int j = 0;j < pos && pri[j] <= n / i;j ++){
            p[i * pri[j]] = 1;
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
    Olashai(n);

    return 0;
}