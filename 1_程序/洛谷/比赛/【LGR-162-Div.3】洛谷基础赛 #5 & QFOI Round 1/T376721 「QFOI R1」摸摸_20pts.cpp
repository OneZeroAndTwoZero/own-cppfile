#include<bits/stdc++.h>
using namespace std;

int T,n;
int a[2005],t[2005],b[2005];
bool ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&T);
    while(T --){
        ans = 1;
        scanf("%d",&n);
        for(int i = 0;i < n;i ++){
            scanf("%d",&t[i]);
        }
        for(int i = 0;i < n;i ++){
            scanf("%d",&b[i]);
            if(i > 0 && b[i] != b[i - 1]) ans = 0;
        }
        if(b[0] % t[0] != 0) ans = 0;
        if(ans) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}