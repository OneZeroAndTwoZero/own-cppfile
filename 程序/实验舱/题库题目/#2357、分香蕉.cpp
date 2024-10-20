#include<bits/stdc++.h>
using namespace std;

struct node{
    int id,w;
    bool operator < (const node &a) const{
        return w > a.w;
    }
};

int n,m;
int idx[100005] = {0};
long long ans[100005] = {0};
int a[100005] = {0};
node b[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++) scanf("%d",&a[i]);
    for(int i = 0;i < m;i ++){
        b[i].id = i;
        scanf("%d",&b[i].w);
    }
    sort(b,b + m);
    sort(a,a + n,greater<int>());
    for(int i = 0;i < m;i ++) idx[b[i].id] = i;
    for(int i = 0;i < n;i ++) ans[i % m] += a[i];
    for(int i = 0;i < m;i ++) printf("%lld ",ans[idx[i]]);

	return 0;
}