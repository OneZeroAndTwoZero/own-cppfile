#include<bits/stdc++.h>
using namespace std;

int n,m,k,pos = 1;
long long x[100005],y[100005];
set<long long> h,w;
unordered_map<long long,int> serh,serw;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&k);
    for(int i = 0;i < k;i ++){
        scanf("%lld %lld",&x[i],&y[i]);
        h.insert(x[i]);
        w.insert(y[i]);
    }
    while(h.size()){
        serh[*h.begin()] = pos ++;
        h.erase(h.begin());
    }
    pos = 1;
    while(w.size()){
        serw[*w.begin()] = pos ++;
        w.erase(w.begin());
    }
    for(int i = 0;i < k;i ++){
        printf("%d %d\n",serh[x[i]],serw[y[i]]);
    }

    return 0;
}