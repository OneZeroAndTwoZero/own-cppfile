#include<bits/stdc++.h>
using namespace std;

struct node{
    int posA,posB;
    long long sum;
    bool operator < (const node &a) const{
        // 注:由于priority_queue默认大根堆
        //    所以反着写,让它实现小根堆的效果
        return sum > a.sum;
    }
};

int n,k;
long long ans;
long long a[200005],b[200005];
priority_queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%lld",&b[i]);
    }
    sort(a,a + n);
    sort(b,b + n);
    // 习惯性从0开始,题解中从1开始
    for(int i = 0;i < n;i ++){
        q.push({i,0,a[i] + b[0]});
    }
    while(k --){
        node t = q.top();
        q.pop();
        // 当前取出的值为答案,重复k次停止后即为真正的答案
        ans = t.sum;
        // 防止越界
        if(t.posB == n - 1) continue;
        q.push({t.posA,t.posB + 1,a[t.posA] + b[t.posB + 1]});
    }
    printf("%lld\n",ans);

	return 0;
}