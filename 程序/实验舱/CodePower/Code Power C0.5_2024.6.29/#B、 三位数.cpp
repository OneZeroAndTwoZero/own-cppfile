#include<bits/stdc++.h>
using namespace std;

int sum = 0, t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i ++){
        scanf("%d", &t);
        sum += t;
    }
    printf("%d\n%d\n", sum, !(sum >= 100 && sum < 1000));

    return 0;
}