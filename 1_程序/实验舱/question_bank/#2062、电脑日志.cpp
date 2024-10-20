#include<bits/stdc++.h>
using namespace std;

int n,m,p;
int idx;
string s;
vector<string> a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> p;
    while(m --){
        cin >> idx >> s;
        a[idx].push_back(s);
    }
    while(p --){
        cin >> idx;
        cout << a[idx].size() << "\n";
        for(auto && i : a[idx]){
            cout << i << "\n";
        }
    }

    return 0;
}