#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi,val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,t,ans = 0x3f3f3f3f;
int f[505];
priority_queue<node> q;

int find(int x){
    if(f[x] == x){
        return x;
    }
    f[x] = find(f[x]);
    return f[x];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        ans = min(ans,t);
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&t);
            q.push({i,j,t});
        }
    }
    for(int i = 0;i <= n;i ++){
        f[i] = i;
    }
    while(q.size()){
        node tem = q.top();
        q.pop();
        if(find(tem.ui) != find(tem.vi)){
            // cout << tem.ui << " " << tem.vi << " " << find(tem.ui) << " " << find(tem.vi) << endl;
            f[find(tem.ui)] = f[find(tem.vi)] = find(tem.vi);
            ans += tem.val;
        }
    }
    printf("%d\n",ans);

	return 0;
}