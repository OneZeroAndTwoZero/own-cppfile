#include<bits/stdc++.h>
using namespace std;

int T;
int n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d %d",&n,&k);
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < k;j ++){
                printf("%c",'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}