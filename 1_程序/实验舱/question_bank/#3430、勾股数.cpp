#include<bits/stdc++.h>
using namespace std;

long long n,cur;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    cur = (n - 1) / 3 + 1;
    printf("%lld %lld %lld\n",cur * 3,cur * 4,cur * 5);
    

	return 0;
}