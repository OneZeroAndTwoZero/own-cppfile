#include<bits/stdc++.h>
using namespace std;

int n,m;
int k,a,b;
int cnt[100005];

void solve1(int l,int f){
    int le = 0x3f3f3f3f,ri = -0x3f3f3f3f;
    for(int i = l;i < n;i ++){
        if(cnt[i] == 0){
            if(!f) continue;
            -- f,cnt[i] = 1;
            le = min(le,i);
            ri = max(ri,i);
        }
    }
    if(le == 0x3f3f3f3f) printf("None\n");
    else printf("%d %d\n",le,ri);
}

int solve2(int l,int r){
    int res = 0;
    for(int i = l;i <= r;i ++){
        res += cnt[i];
        cnt[i] = 0;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d %d",&k,&a,&b);
        if(k == 1){
            solve1(a,b);
        }else{
            printf("%d\n",solve2(a,b));
        }
    }

	return 0;
}