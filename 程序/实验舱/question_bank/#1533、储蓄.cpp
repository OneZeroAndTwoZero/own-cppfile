#include<bits/stdc++.h>
using namespace std;

int n,d,t;
int cnt[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&d);
    for(int i = 1;i <= d;i ++){
        scanf("%d",&t);
        cnt[t] += i;
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",cnt[i]," \n"[i == n - 1]);
    }

    return 0;
}