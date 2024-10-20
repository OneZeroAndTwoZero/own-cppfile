#include<bits/stdc++.h>
using namespace std;

int n,t,pos = 1,maxn = 0;
vector<int> a[1000006];
int ans[1000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        if(t > maxn + 1){
            printf("-1\n");
            return 0;
        }
        maxn = max(maxn,t);
        a[t].push_back(i);
    }
    for(int i = 1;i <= 1000000;i ++){
        reverse(a[i].begin(),a[i].end());
        for(auto && k : a[i]){
            ans[k] = pos ++;
        }
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",ans[i]," \n"[i == n - 1]);
    }

    return 0;
}
