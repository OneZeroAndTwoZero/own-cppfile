#include<bits/stdc++.h>
using namespace std;

int T,n,k;
int a[2005];

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
        bool p = 0;
        for(int i = 0;i < n;i ++){
            scanf("%d",&a[i]);
            if(a[i] == k) p = 1;
        }
        if(p){
            printf("0\n");
            continue;
        }
        for(int i = 0;i < n && !p;i ++){
            for(int j = 0;j < n;j ++){
                if(a[i] * k != a[j]) continue;
                p = 1;
                break;
            }
        }
        if(p) printf("1\n");
        else printf("-1\n");
    }

    return 0;
}