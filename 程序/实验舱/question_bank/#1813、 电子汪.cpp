#include<bits/stdc++.h>
using namespace std;

int a, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &a, &b);
    a += b;
    while (a --){
        printf("Wang!");
    }
    printf("\n");

    return 0;
}