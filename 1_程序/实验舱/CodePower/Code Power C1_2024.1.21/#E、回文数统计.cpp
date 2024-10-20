#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;

bool check(int x){
    int t = x,res = 0;
    while(t){
        res = res * 10 + (t % 10);
        t /= 10;
    }
    return res == x;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = n;i <= m;i ++){
        if(check(i)) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}