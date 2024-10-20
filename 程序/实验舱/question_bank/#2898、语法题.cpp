#include<bits/stdc++.h>
using namespace std;

int n,m;
string adj[105],noun[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        cin >> adj[i];
    }
    for(int i = 1;i <= m;i ++){
        cin >> noun[i];
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cout << adj[i] << " as " << noun[j] << "\n";
        }
    }

	return 0;
}