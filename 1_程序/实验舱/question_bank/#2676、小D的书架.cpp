#include<bits/stdc++.h>
using namespace std;

int n,m,t;
string s;
vector<string> a[10005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0;i < m;i ++){
        cin >> t >> s;
        a[t].push_back(s);
    }
    for(int i = 1;i <= n;i ++){
        cout << i << " " << a[i].size() << " ";
        sort(a[i].begin(),a[i].end());
        for(auto && i : a[i]){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}