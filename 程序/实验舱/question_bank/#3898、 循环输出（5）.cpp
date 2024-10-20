#include<bits/stdc++.h>
using namespace std;

int a, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i ++){
        printf("%d\n", i);
    }

    return 0;
}