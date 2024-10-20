#include<bits/stdc++.h>
using namespace std;

int a[5],maxn = 0,n,m;
vector<int> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < 4;i ++){
        scanf("%d",&a[i]);
        maxn = max(maxn,a[i]);
    }
    scanf("%d %d",&n,&m);
    for(int i = 0;i < 4;i ++){
        if(a[i] < n || (maxn - a[i]) > m) ans.push_back(i + 1);
    }
    if(!ans.size()) printf("Normal");
    else if(ans.size() >= 2) printf("Warning: please check all the tires!\n");
    else printf("Warning: please check #%d!\n",ans[0]);

	return 0;
}