#include<bits/stdc++.h>
using namespace std;

int r, g, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &r, &g, &b);
    printf("%d\n", 3 * r + 4 * g + 5 * b);

    return 0;
}