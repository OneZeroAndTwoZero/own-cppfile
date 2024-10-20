#include<bits/stdc++.h>
using namespace std;

int n,m,r = 1,num = 0;
int a[1000006] = {0};
int ans[1000006] = {0};
int cnt[20005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    for(int i = 1;i <= n;i ++){
        while(r <= n && num < m){
			num += !cnt[a[r]];
            cnt[a[r ++]] ++;
        }
        if(r == n + 1 && num < m) break;
        if(!ans[r - i]) ans[r - i] = i;
        cnt[a[i]] --;
        num -= !cnt[a[i]];
    }
    for(int i = 0;i <= n;i ++)
        if(ans[i] != 0){
            printf("%d %d",ans[i],ans[i] + i - 1);
            break;
        }

	return 0;
}