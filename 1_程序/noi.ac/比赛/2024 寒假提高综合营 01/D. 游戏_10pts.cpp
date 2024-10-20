#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
bool is_ok7 = 1;
int p[1000006];
long long ans = 0;

void work7(){
    for(int i = 1;i <= n;i ++){
        printf("%lld%c",(long long)i * (i - 1) / 2," \n"[i == n]);
    }
    exit(0);
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
    for(int i = 2;i <= n;i ++){
        scanf("%d",&p[i]);
        if(p[i] != i - 1) is_ok7 = 0;
    }
    if(is_ok7) work7();

    return 0;
}