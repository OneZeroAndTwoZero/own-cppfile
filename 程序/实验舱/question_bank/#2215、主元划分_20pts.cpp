#include<bits/stdc++.h>
using namespace std;

int n,cnt;
int a[100005],minn[100005],maxn[100005];
vector<int> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        maxn[i] = max(maxn[i - 1],a[i]);
    }
    minn[n + 1] = 0x3f3f3f3f;
    for(int i = n;i >= 1;i --){
        minn[i] = min(minn[i + 1],a[i]);
    }
    for(int i = 1;i <= n;i ++){
        if(maxn[i - 1] > a[i] || minn[i + 1] < a[i]) continue;
        cnt ++;
        ans.push_back(i);
    }
    printf("%d\n",cnt);
    for(auto && i : ans){
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}