#include<bits/stdc++.h>
using namespace std;

struct node{
    int pos,idx;
    long long val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,m;
int a[10005],b[10005],c[10005];
unordered_map<int,int> f[10005];
priority_queue<node> q;

int num(int i,int x){
    return a[i] * x * x + b[i] * x + c[i];
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
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        // 二次函数图像对称轴左同右异,所以一定<1
        q.push({i,1,num(i,1)});
    }
    while(m --){
        printf("%lld ",q.top().val);
        int p = q.top().idx,k = q.top().pos;
        if(!f[k][p + 1]){
            f[k][p + 1] = 1;
            q.push({k,p + 1,num(k,p + 1)});
        }
        q.pop();
    }

    return 0;
}