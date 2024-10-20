#include<bits/stdc++.h>
using namespace std;

int n;

int operate(int x){
    if(x < 10) return x;
    int res = 0;
    while(x){
        res += x % 10;
        x /= 10;
    }
    return operate(res);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    printf("%d\n",operate(n));

    return 0;
}