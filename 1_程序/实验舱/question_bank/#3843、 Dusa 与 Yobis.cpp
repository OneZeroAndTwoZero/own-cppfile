#include<bits/stdc++.h>
using namespace std;

int d, r;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &d);
    while (~scanf("%d", &r)){
        if (d <= r){
            printf("%d\n", d);
            return 0;
        }
        d += r;
    }

    return 0;
}