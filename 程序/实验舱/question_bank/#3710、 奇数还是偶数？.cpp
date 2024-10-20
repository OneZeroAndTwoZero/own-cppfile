#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&x);
    if(x & 1) printf("奇数\n");
    else printf("偶数\n");

    return 0;
}
