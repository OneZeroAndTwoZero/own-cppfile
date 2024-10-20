#include<bits/stdc++.h>
using namespace std;

int T;
int x, y;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &T);
    while (T --){
        scanf("%d %d", &x, &y);
        int res = y - x;
        if (12 > x && 12 <= y) res --;
        if (24 > x && 24 <= y) res --;
        printf("%d\n", res);
    }

    return 0;
}