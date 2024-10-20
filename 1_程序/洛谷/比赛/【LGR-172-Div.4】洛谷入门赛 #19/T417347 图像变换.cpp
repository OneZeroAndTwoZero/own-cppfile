#include<bits/stdc++.h>
using namespace std;

int n,m,k;
string a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    for(int i = 0;i < k * n;i ++){
        for(int j = 0;j < k * m;j ++){
            cout << a[i / k][j / k];
        }
        cout << "\n";
    }

    return 0;
}