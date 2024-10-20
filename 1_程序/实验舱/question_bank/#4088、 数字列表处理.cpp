#include<bits/stdc++.h>
using namespace std;

int cid = 0, sum = 0;
int a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (~scanf("%d", &a[++ cid])) sum += a[cid];
    cid --;
    sort(a + 1, a + cid + 1);
    printf("%d\n%d\n%d\n", sum, a[cid], a[1]);
    

    return 0;
}