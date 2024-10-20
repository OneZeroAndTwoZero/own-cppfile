#include<bits/stdc++.h>
using namespace std;

struct node{
    long long num,maxnum,ci,pre;
    // pre表示扩展时,上一次枚举到哪个质因数了
    bool operator < (const node &a) const{
        return num < a.num;
    }
};

priority_queue<node> q;
// 没必要判重(血的教训)
// unordered_map<long long,int> f;
long long n,ans;
int x,p[32] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,
59,61,67,71,73,79,83,89,97,101,103,107,109,113,127};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %d",&n,&x);
    for(int i = 0;i < 31;i ++){
        for(long long pos = 1,k = p[i];;pos ++,k *= p[i]){
            // cout << k << "[]\n";
            // f[k] = 1;
            q.push({k,i,pos,i - 1});
            if(k > n / p[i]) break;
        }
    }
    while(1){
        node t = q.top();
        q.pop();
        ans = t.num;
        x --;
        if(!x) break;
        if(t.ci <= 1) continue;
        for(int i = t.pre;i >= 0;i --){
            long long res = t.num / p[t.maxnum] * p[i];
            // cout << t.num << " ;; " << res << ";;\n";
            // if(f[res]) continue;
            // f[res] = 1;
            q.push({res,t.maxnum,t.ci - 1,i});
        }
    }
    printf("%lld\n",ans);

	return 0;
}