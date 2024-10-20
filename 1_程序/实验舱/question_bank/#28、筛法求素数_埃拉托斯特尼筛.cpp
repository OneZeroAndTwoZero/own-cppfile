#include<bits/stdc++.h>
using namespace std;

int n;
bool p[6000007];

void Eratosthenes(int n){
    p[0] = p[1] = 1;
    for(int i = 2;i <= n;i ++){
        if(p[i]) continue;
        printf("%d ",i);
        // j shouldn't start from i sometimes
        if((long long)i * i > n) continue;
        for(int j = i;j * i <= n;j ++){
            p[j * i] = 1;
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
    Eratosthenes(n);

    return 0;
}
