#include<bits/stdc++.h>
using namespace std;

int n;

void put(int x){
    if(x == 0) return;
    put(x >> 1);
    printf("%d",x & 1);
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
    if(n == 0) printf("0\n");
    else put(n);

    return 0;
}
