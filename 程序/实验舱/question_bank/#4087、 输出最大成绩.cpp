#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i ++){
        scanf("%d", &a[i]);
    }
    sort(a, a + 3);
    printf("%d\n", a[2]);

    return 0;
}