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
    if(x >= 40) printf("pass\n");
    else printf("fail\n");

    return 0;
}
