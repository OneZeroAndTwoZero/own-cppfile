#include<bits/stdc++.h>
using namespace std;

int r,c,p,ans;
int x,y;
int a[3005][3005];
int u[3005][3005];
int f0[3005],fn[3005];
stack<int> s;

void __init(){
    while(s.size()) s.pop();
    for(int i = 0;i <= c + 1;i ++){
        f0[i] = fn[i] = 0;
    }
}

int maxrect(int idx){
    int res = 0;
    __init();
    for(int i = 1;i <= c;i ++){
        while(s.size() && u[idx][i] < u[idx][s.top()]){
            f0[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()){
        f0[s.top()] = c + 1;
        s.pop();
    }
    for(int i = c;i >= 1;i --){
        while(s.size() && u[idx][i] < u[idx][s.top()]){
            fn[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    for(int i = 1;i <= c;i ++){
        int w = f0[i] - fn[i] - 1;
        res = max(res,w * u[idx][i]);
    }

    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&r,&c,&p);
    while(p --){
        scanf("%d %d",&x,&y);
        a[x][y] = 1;
    }
    for(int i = 1;i <= r;i ++){
        for(int j = 1;j <= c;j ++){
            if(a[i][j]) continue;
            u[i][j] = u[i - 1][j] + 1;
        }
    }
    for(int i = 1;i <= r;i ++){
        ans = max(ans,maxrect(i));
    }
    printf("%d\n",ans);

	return 0;
}