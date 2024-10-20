#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1;i <= 4;i ++){
        for(int j = 1;j <= i - 1;j ++){
            printf(" ");
        }
        for(int j = 1;j <= 9 - 2 * i;j ++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
} 
