#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 100; i ++){
        if (i & 1) continue;
        printf("%d\n", i);
    }

    return 0;
}