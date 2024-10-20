#include<bits/stdc++.h>
using namespace std;

int a[3];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    sort(a,a + 3);
    if(a[2] > a[0] + a[1]) printf("1\n");
    else printf("0\n");

    return 0;
}