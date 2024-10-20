#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[5005];
vector<int> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

	scanf("%d %d",&n,&m);
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= n;j++){
            if(j % i) continue;
            a[j] = !a[j];
        }
    }
    for(int i = 1;i <= n;i++){
        if(a[i]) ans.push_back(i);
    }
    for(int i = 0;i < ans.size();i ++){
        printf("%d%c",ans[i],",\n"[i == ans.size() - 1]);
    }

    return 0;
}
