#include<bits/stdc++.h>
using namespace std;

int n,cur = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i > 0;i += cur){
        for(int j = 0;j < i;j ++){
            printf("%d",i);
        }
        printf("\n");
        if(i == n) cur *= -1;
    }

    return 0;
}