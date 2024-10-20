#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0x3f3f3f3f;
int a[10005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

   scanf("%d %d",&n,&m);
   if(!n && !m){
       puts("0");
       return 0;
   }
   for(int i = 1;i <= n;i ++){
       scanf("%d",&a[i]);
       a[i] += a[i - 1];
       if(i >= m) ans = min(ans,a[i] - a[i - m]);
   }
   printf("%d\n",ans);

    return 0;
}