#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000006],pos[1000006];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        pos[a[i]] = i;
    }
    for(int i = 1;i < n;i ++){
        a[pos[i - 1]] = i;
        a[pos[i]] = 0;
        pos[0] = pos[i];
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",a[i]," \n"[i == n - 1]);
    }

    return 0;
}