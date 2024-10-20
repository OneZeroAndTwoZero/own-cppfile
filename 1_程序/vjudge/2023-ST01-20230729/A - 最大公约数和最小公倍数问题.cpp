#include<bits/stdc++.h>
using namespace std;

int p,q;
unordered_map<int,int> a,b;
set<int> d;
long long ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&p,&q);
    for(int i = 2;i * i <= p;i ++){
        while(p % i == 0){
            d.insert(i);
            p /= i;
            a[i] ++;
        }
    }
    if(p != 1){
        a[p] ++;
        d.insert(p);
    }
    for(int i = 2;i * i <= q;i ++){
        while(q % i == 0){
            d.insert(i);
            q /= i;
            b[i] ++;
        }
    }
    if(q != 1){
        b[q] ++;
        d.insert(q);
    }
    for(auto && i : d){
        if(a[i] > b[i]){
            ans = 0;
            break;
        }
        if(a[i] != b[i]){
            ans *= 2;
        }
    }
    printf("%lld\n",ans);

	return 0;
}