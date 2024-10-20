#include<bits/stdc++.h>
using namespace std;

int T;
int p,a,b,c;

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
        scanf("%d %d %d %d",&p,&a,&b,&c);
        if(b != 0){
            printf("Yes\n");
        }else if(c == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}