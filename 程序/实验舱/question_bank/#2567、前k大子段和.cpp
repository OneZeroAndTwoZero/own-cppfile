#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
    long long sum;
    bool operator < (const node &a) const{
        // 优先队列默认大根堆,判断函数反着写实现小根堆效果
        return sum < a.sum;
    }
};

int n,k;
long long cnt;
long long a[100005];
unordered_map<long long,bool> f;
priority_queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
        cnt += a[i];
    }
    // 全局最大值
    q.push({0,n - 1,cnt});
    f[n - 1] = 1;
    while(k --){
        node t = q.top();
        q.pop();
        // 当前最大值
        printf("%lld ",t.sum);
        // 防止越界
        if(t.r - t.l <= 0) continue;
        // 考虑(i+1,j)和(i,j-1)
        if(f[(t.l + 1) * (1e9 +1) + t.r] == 0){
            f[(t.l + 1) * (1e9 +1) + t.r] = 1;
            q.push({t.l + 1,t.r,t.sum - a[t.l]});
        }
        if(f[t.l * (1e9 +1) + t.r - 1] == 0){
            f[t.l * (1e9 +1) + t.r - 1] = 1;
            q.push({t.l,t.r - 1,t.sum - a[t.r]});
        }
    }

	return 0;
}