#include<bits/stdc++.h>
using namespace std;

int t;
int n,a,x,b,y;
bool ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
        ans = 0;
        if(a == b){
            printf("YES\n");
            continue;
        }
        while(1){
            if(a == x || b == y) break;
            a = a % n + 1;
            b = (b - 2 + n) % n + 1;
            if(a == b){
                printf("YES\n");
                ans = 1;
                break;
            }
            
        }
        if(!ans) printf("NO\n");
    }

	return 0;
}