#include<bits/stdc++.h>
using namespace std;

int n;
long long cat[14] = {0};

long long operate(int a){
    if(a == 0 || a == 1) return 1;
    if(cat[a] != 0) return cat[a];
    long long res = 0;
    for(int i = 1;i <= a;i ++)
        res += operate(i - 1) * operate(a - i);
    cat[a] = res;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cat[1] = cat[0] = 1LL;
    scanf("%d",&n);
    printf("%lld\n",operate(n));

	return 0;
}