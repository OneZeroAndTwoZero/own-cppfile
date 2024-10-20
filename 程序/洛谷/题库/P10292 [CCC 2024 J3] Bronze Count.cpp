#include<bits/stdc++.h>
using namespace std;

int n,t;
set<int> s;
int cnt[1000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        cnt[t] ++;
        s.insert(-t);
    }
    s.erase(s.begin());
    s.erase(s.begin());
    printf("%d %d\n",-1 * *s.begin(),cnt[-1 * *s.begin()]);

    return 0;
}