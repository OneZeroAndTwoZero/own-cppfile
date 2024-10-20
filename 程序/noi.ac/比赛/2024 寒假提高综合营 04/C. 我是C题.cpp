#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    double xi,yi;
    bool operator < (const node &a) const{
        if(xi != a.xi) return xi < a.xi;
        return yi < a.yi;
    }
    node operator - (const node &a) const{
        return {xi - a.xi,yi - a.yi};
    }
    double operator * (const node &a) const{
        return xi * a.yi - a.xi * yi;
    }
};

int id,n,op;
double x,a[100005],b[100005];
node point[1000005];
bool is_in_hull[1000005];
vector<node> edge;
double ans = -0x3f3f3f3f;

void convex_hull(){
    stack<int> s;
    sort(point + 1,point + n + 1);
    s.push(1);
    for(int i = 2;i <= n;i ++){
        while(s.size() >= 2){
            int tp = s.top(),nxttp;
            s.pop();
            nxttp = s.top();
            s.push(tp);
            if((point[nxttp] - point[tp]) * (point[tp] - point[i]) > 0){
                break;
            }
            is_in_hull[tp] = 0;
            s.pop();
        }
        is_in_hull[i] = 1;
        s.push(i);
    }
    int cur = s.size();
    for(int i = n - 1;i > 0;i --){
        if(is_in_hull[i]) continue;
        while(s.size() > cur){
            int tp = s.top(),nxttp;
            s.pop();
            nxttp = s.top();
            s.push(tp);
            if((point[nxttp] - point[tp]) * (point[tp] - point[i]) > 0){
                break;
            }
            is_in_hull[tp] = 0;
            s.pop();
        }
        is_in_hull[i] = 1;
        s.push(i);
    }
    while(s.size()){
        edge.push_back(point[s.top()]);
        s.pop();
    }
}

double getpos(double x1,double y1,double x2,double y2){
    if((x1 > x && x2 > x) || (x1 < x && x2 < x)) return -0x3f3f3f3f;
    double k = (y2 - y1) / (x2 - x1);
    double b = y1 - k * x1;
    return x * k + b;
}

void solve1(){
    for(int i = 1;i <= n;i ++){
        point[i].xi = a[i];
        point[i].yi = b[i];
    }
    convex_hull();
    for(int i = 1;i < edge.size();i ++){
        ans = max(getpos(edge[i - 1].xi,edge[i - 1].yi,edge[i].xi,edge[i].yi),ans);
    }
    printf("%.8lf\n",ans);
}

void solve2(){
    sort(b + 1,b + n + 1,greater<double>());
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i ++){
        ans = max(ans,getpos(a[1],b[1],a[i],b[2]));
        ans = max(ans,getpos(a[1],b[2],a[i],b[1]));
    }
    for(int i = 0;i < n;i ++){
        ans = max(ans,getpos(a[n],b[1],a[i],b[2]));
        ans = max(ans,getpos(a[n],b[2],a[i],b[1]));
    }
    printf("%.8lf\n",ans);
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
    for(int i = 1;i <= n;i ++){
        scanf("%lf",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lf",&b[i]);
    }
    scanf("%d",&op);
    if(op == 1){
        solve1();
    }else{
        solve2();
    }

    return 0;
}