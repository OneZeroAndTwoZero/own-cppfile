#include<bits/stdc++.h>
using namespace std;

int n,t,l,r;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    l = 1,r = n;
    while(1){
        printf("%d\n",(l + r) >> 1);
        fflush(stdout);
        scanf("%d",&t);
        if(t == 0){
            l = (l + r) >> 1;
        }else{
            r = (l + r) >> 1;
        }
        if(l == r - 1){
            printf("! %d\n",l);
            return 0;
        }
    }

    return 0;
}