#include<bits/stdc++.h>
using namespace std;

int n,ans = INT_MAX;
int a[105],b[105];

void dfs(int k,int num,int val,int bad){
    if(k == n){
        // cout << val << " " << bad << ";;\n";
        if(num) ans = min(ans,abs(val - bad));
        return;
    }
    dfs(k + 1,num,val,bad);
    dfs(k + 1,num + 1,val + a[k],bad * b[k]);
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
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&b[i],&a[i]);
    }
    dfs(0,0,0,1);
    printf("%d\n",ans);

	return 0;
}