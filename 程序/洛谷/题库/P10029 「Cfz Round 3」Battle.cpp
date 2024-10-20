#include<bits/stdc++.h>
using namespace std;

int t,n,m,p;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d",&n,&m,&p);
        if(m < p){
            printf("Alice\n");
        }else if(n < p){
            printf("Bob\n");
        }else{
            printf("Lasting Battle\n");
        }
    }

    return 0;
}