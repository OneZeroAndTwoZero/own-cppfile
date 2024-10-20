#include<bits/stdc++.h>
using namespace std;

int T;
long long a, d, x;

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
        scanf("%lld %lld %lld", &a, &d, &x);
        x -= a;
        if (d == 0){
            if (x == 0){
                printf ("Yes\n");
            }else{
                printf("No\n");
            }
            continue;
        }
        if (x % d != 0 || (x / d) < 0) printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}