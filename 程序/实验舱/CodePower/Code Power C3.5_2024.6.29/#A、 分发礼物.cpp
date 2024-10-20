#include<bits/stdc++.h>
using namespace std;

int n;
int r[100005], a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        scanf("%d", &r[i]);
    }
    for (int i = 1; i <= n; i ++){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i ++){
        printf("%d%c", a[r[i]], " \n"[i == n]);
    }

    return 0;
}