#include<bits/stdc++.h>
using namespace std;

long long n;
int t,tn;
bool p;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    while(n > 0){
        t ++;
        if(!p & (n % 3 == 1)){
            tn = t;
            p = 1;
        }
        n -= (n + 2) / 3;
    }
    printf("%d %d\n",t,tn);

	return 0;
}