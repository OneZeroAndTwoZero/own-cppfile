#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

const int N = 1e5 + 10;
long long id,n,x,i,cnt;
long long a[N],b[N],c[N],d[N],e[N];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> id;
    cin >> n >> x;
    i = 1;
    for(int i = 1;i <= n;i ++){
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
    }
    while(i != n + 1){
        if(cnt > 1000000){
            printf("-1\n");
            return 0;
        }
        cnt ++;
        if(x == a[i]) x += b[i],i = c[i];
        else x += d[i],i = e[i];
    }
    cout << cnt << endl;
}