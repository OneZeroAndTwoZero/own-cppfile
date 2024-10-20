#include<bits/stdc++.h>
using namespace std;

int T;
int x,n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d %d",&x,&n);
        int ans = -1;
        for(int i = 1;i * i <= x;i ++){
            if(x % i) continue;
            if(x / i >= n) ans = max(ans,i);
            if(i >= n) ans = max(ans,x / i);
        }
        printf("%d\n",ans);
    }

    return 0;
}