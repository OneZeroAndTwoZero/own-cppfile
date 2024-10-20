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
    printf("%d\n", a * 50 - b * 10 + 500 * (a > b));

    return 0;
}