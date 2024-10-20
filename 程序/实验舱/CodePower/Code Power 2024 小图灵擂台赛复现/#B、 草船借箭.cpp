#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long n,m,w,k,p;
long long laspos = 0,las = -1,nownum = 0;
map<long long,long long> cnt;

int main(){
    freopen("arrow.in","r",stdin);
    freopen("arrow.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&n,&m,&w);
    while(m --){
        scanf("%lld %lld",&k,&p);
        cnt[k] += p;
    }
    cnt[n + 1] = -1;
    map<long long,long long> :: iterator it = cnt.begin();
    las = it->second;
    for(auto && i : cnt){
        // cout << i.first << " " << i.second << "[][]\n";
        if(i.second != las){
            printf("%lld %lld\n",nownum,las + w);
            las = i.second;
            nownum = 1;
        }else{
            nownum ++;
        }
        if(i.first != laspos + 1){
            printf("%lld %lld\n",i.first - laspos - 1,w);
        }
        laspos = i.first;
    }

    return 0;
}