#include<bits/stdc++.h>
using namespace std;

int n,m,k;
int l = 0,r,ans = -1,maxn,maxnow;
int a[1005][1005];
int u[1005][1005];
int f0[1005],fn[1005];

int getmat(int idx){
    stack<int> s;
    for(int j = 1;j <= m;j ++){
        while(s.size() && u[idx][s.top()] > u[idx][j]){
            fn[s.top()] = j;
            s.pop();
        }
        s.push(j);
    }
    while(s.size()){
        fn[s.top()] = m + 1;
        s.pop();
    }
    for(int j = m;j > 0;j --){
        while(s.size() && u[idx][s.top()] > u[idx][j]){
            f0[s.top()] = j;
            s.pop();
        }
        s.push(j);
    }
    while(s.size()){
        f0[s.top()] = 0;
        s.pop();
    }
    int res = 0;
    for(int i = 1;i <= m;i ++){
        res = max(res,(fn[i] - f0[i] - 1) * u[idx][i]);
    }
    return res;
}

bool check(int x){
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            u[i][j] = a[i][j] >= x;
            if(u[i][j] == 1) u[i][j] += u[i - 1][j];
        }
    }
    for(int i = 1;i <= n;i ++){
        maxnow = max(maxnow,getmat(i));
    }
    return maxnow >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&m,&k);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
            r = max(r,a[i][j]);
        }
    }
    while(l <= r){
        maxnow = 0;
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            maxn = maxnow;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%d %d\n",ans,maxn);

	return 0;
}