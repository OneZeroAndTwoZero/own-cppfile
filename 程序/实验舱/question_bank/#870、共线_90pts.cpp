#include<bits/stdc++.h>
using namespace std;

int n,tx,ty,ans = 1;
int cntx[100005],cnty[100005];
int x[1005],y[1005];
double k,b;

int operate(double k,double b){
    int res = 0;
    for(int i = 0;i < n;i ++){
        double check = y[i],cur = (double)x[i] * k + b;
        if(fabs(check - cur) <= 0.0000000001){
            res ++;
        }
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&tx,&ty);
        cntx[tx] ++,cnty[ty] ++;
        ans = max({ans,cntx[tx],cnty[ty]});
        x[i] = tx,y[i] = ty;
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(x[i] == x[j] || y[i] == y[j]) continue;
            k = (((double)y[j] - y[i]) / ((double)x[j] - x[i]));
            b = (double)y[j] - (double)x[j] * k;
            ans = max(ans,operate(k,b));
        }
    }
    printf("%d\n",ans);

    return 0;
}