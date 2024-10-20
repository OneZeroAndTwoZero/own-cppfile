#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&a,&b);
    printf("%d",a + b);

    return 0;
}