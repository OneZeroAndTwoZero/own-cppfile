#include<bits/stdc++.h>
using namespace std;

int n,m;
int a,b,c;
int num = 0,ans1,ans2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d",&a,&b,&c);
        num += a * b * c;
    }
    ans1 = ceil((double)num / (double)m);
    ans2 = num % m;
    if(!ans2) ans2 = m;
    printf("%d %d\n",ans1,ans2);

    return 0;
}