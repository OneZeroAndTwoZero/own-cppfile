#include<bits/stdc++.h>
using namespace std;

struct sub{
    int ti;
    long long wi;
    bool operator < (const sub &a) const{
        return ti < a.ti;
    }
};

int n;
long long ans = 0;
sub a[1000006];
priority_queue<long long> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %lld",&a[i].ti,&a[i].wi);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(q.size() < a[i].ti){
            ans += a[i].wi;
            q.push({-a[i].wi});
        }else if(abs(q.top()) < a[i].wi){
            ans += q.top();
            q.pop();
            ans += a[i].wi;
            q.push({-a[i].wi});
        }
    }
    printf("%lld\n",ans);

	return 0;
}