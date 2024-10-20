#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1000006] = {0};
int ans[1000006] = {0};
int cnt[20005] = {0};
set<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    int r = 1;
    for(int i = 1;i <= n;i ++){
        while(r <= n && s.size() < m){
            cnt[a[r]] ++;
            if(cnt[a[r]] == 1) s.insert(a[r]);
            r ++;
        }
        if(r == n + 1 && s.size() < m) break;
        if(!ans[r - i]) ans[r - i] = i;
        cnt[a[i]] --;
        if(!cnt[a[i]]) s.erase(a[i]);
    }
    for(int i = 0;i <= n;i ++){
        if(ans[i] != 0){
            printf("%d %d",ans[i],ans[i] + i - 1);
            break;
        }
    }

	return 0;
}