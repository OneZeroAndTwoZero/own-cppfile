#include<bits/stdc++.h>
using namespace std;

int n,t,st,k[2];
vector<int> a[2],ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < 2;i ++){
        scanf("%d",&k[i]);
        for(int j = 0;j < k[i];j ++){
            scanf("%d",&t);
            n = max(n,t);
            a[i].push_back(t);
        }
    }
    n ++;
    reverse(a[0].begin(),a[0].end());
    reverse(a[1].begin(),a[1].end());
    if(a[0].size() < a[1].size()){
        swap(a[0],a[1]);
    }
    while(a[1].size() < a[0].size()){
        a[1].push_back(0);
    }
    for(int i = 0;i < max(k[0],k[1]);i ++){
        ans.push_back(a[0][i] + a[1][i]);
    }
    ans.push_back(0);
    for(int i = 0;i < max(k[0],k[1]);i ++){
        ans[i + 1] += ans[i] / n;
        ans[i] %= n;
    }
    reverse(ans.begin(),ans.end());
    while(ans[st] == 0 && st != ans.size() - 1) st ++;
    printf("%d ",ans.size() - st);
    for(int i = st;i < ans.size();i ++){
        printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
    }

	return 0;
}