#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int id,n,op;
double x,ans = -0x3f3f3f3f;
double a[100005],b[100005];

double getpos(double x1,double y1,double x2,double y2){
    if((x1 > x && x2 > x) || (x1 < x && x2 < x)) return -0x3f3f3f3f;
    double k = (y2 - y1) / (x2 - x1);
    double b = y1 - k * x1;
    return x * k + b;
}

void solve1(){
    for(int i = 0;i < n;i ++){
        for(int j = i + 1;j < n;j ++){
            ans = max(ans,getpos(a[i],b[i],a[j],b[j]));
        }
    }
    printf("%.7lf\n",ans);
}

void solve2(){
    sort(b,b + n,greater<double>());
    sort(a,a + n);
    for(int i = 1;i < n;i ++){
        ans = max(ans,getpos(a[0],b[0],a[i],b[1]));
        ans = max(ans,getpos(a[0],b[1],a[i],b[0]));
    }
    for(int i = 1;i < n - 1;i ++){
        ans = max(ans,getpos(a[n - 1],b[0],a[i],b[1]));
        ans = max(ans,getpos(a[n - 1],b[1],a[i],b[0]));
    }
    printf("%.7lf\n",ans);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %lf",&id,&n,&x);
    for(int i = 0;i < n;i ++){
        scanf("%lf",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%lf",&b[i]);
    }
    scanf("%d",&op);
    if(op == 1) solve1();
    else solve2();

    return 0;
}