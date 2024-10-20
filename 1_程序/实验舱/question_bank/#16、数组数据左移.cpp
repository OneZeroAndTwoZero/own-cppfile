#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    while(m --){
        for(int i = 0;i < n - 1;i ++){
            swap(a[i],a[i + 1]);
        }
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",a[i]," \n"[i == n - 1]);
    }

    return 0;
}
