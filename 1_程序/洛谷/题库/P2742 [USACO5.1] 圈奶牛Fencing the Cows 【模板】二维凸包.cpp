#include<bits/stdc++.h>
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

int n;
node point[1000005];
bool is_in_hull[1000005];
vector<node> edge;
double ans = 0;

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

double getd(node a,node b){
    double res = (a.xi - b.xi) * (a.xi - b.xi) + (a.yi - b.yi) * (a.yi - b.yi);
    res = sqrt(res);
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
    for(int i = 1;i <= n;i ++){
        scanf("%lf %lf",&point[i].xi,&point[i].yi);
    }
    convex_hull();
    for(int i = 1;i < edge.size();i ++){
        // cout << edge[i].xi << " " << edge[i].yi << " ;;\n";
        ans += getd(edge[i - 1],edge[i]);
    }
    printf("%.2lf\n",ans);

    return 0;
}