#include<bits/stdc++.h>
using namespace std;

int T,n;
int tem,s,t;

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
        unordered_map<int,int> f;
        scanf("%d %d",&s,&n);
        while(n --){
            scanf("%d",&tem);
            f[tem] = 1;
        }
        scanf("%d",&t);
        int ans = 0;
        for(int i = s;i <= t;i ++){
            if(f[i]) continue;
            ans ++;
        }
        printf("%d\n",ans);
    }

    return 0;
}