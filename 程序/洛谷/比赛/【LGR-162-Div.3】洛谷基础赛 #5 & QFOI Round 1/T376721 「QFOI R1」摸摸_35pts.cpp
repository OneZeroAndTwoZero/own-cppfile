#include<bits/stdc++.h>
using namespace std;

int T,n,check;
int a[2005],t[2005],b[2005];
bool ans = 1,ha;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&T);
    while(T --){
        ans = 1;
        ha = 0;
        scanf("%d",&n);
        for(int i = 0;i < n;i ++){
            scanf("%d",&t[i]);
        }
        for(int i = 0;i < n;i ++){
            scanf("%d",&b[i]);
        }
        for(int i = 0;i <= (n >> 1);i ++){
            if((b[i] + b[n - i - 1]) % (t[i] + t[n - i - 1]) != 0){
                ans = 0;
            }
            int num = (b[i] + b[n - i - 1]) / (t[i] + t[n - i - 1]);
            if(!ha){
                ha = 1;
                check = num;
            }
            if(num != check) ans = 0;
        }
        if(check & 1 && t[0] != b[0]) ans = 0;
        if(ans) printf("Yes\n");
        else printf("No\n");
    }

	return 0;
}