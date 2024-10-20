#include<bits/stdc++.h>
using namespace std;

struct node{
    int ti,ri;
    bool operator < (const node &a) const{
        return ti < a.ti;
    }
};

int n,ans = 0;
node a[1005];
priority_queue<int> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i].ti);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i].ri);
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(q.size() < a[i].ti){
            ans += a[i].ri;
            q.push(-1 * a[i].ri);
        }else if(a[i].ri > abs(q.top())){
            ans += q.top();
            q.pop();
            q.push(-1 * a[i].ri);
            ans += a[i].ri;
        }
    }
    printf("%d\n",ans);

	return 0;
}