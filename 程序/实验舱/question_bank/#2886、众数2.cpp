#include<bits/stdc++.h>
using namespace std;

int n,t;
int maxn = -1,maxpos,minn = 114514,minpos;
int cnt[1005];

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
        cnt[t] ++;
    }
    for(int i = 0;i <= 1000;i ++){
        if(cnt[i] > maxn){
            maxn = cnt[i];
            maxpos = i;
        }
        if(cnt[i] && cnt[i] < minn){
            minn = cnt[i];
            minpos = i;
        }
    }
    printf("%d %d\n%d %d\n",minpos,minn,maxpos,maxn);

	return 0;
}