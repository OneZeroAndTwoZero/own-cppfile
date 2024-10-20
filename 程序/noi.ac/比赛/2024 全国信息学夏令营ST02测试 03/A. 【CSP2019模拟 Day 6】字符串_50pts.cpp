#include<bits/stdc++.h>
using namespace std;

int n;
string s, t;

void operate(){
    string res1 = "", res2 = "";
    for (int i = 1; i <= n; i ++){
        if (i & 1) res1.push_back(s[i - 1]);
        else res2.push_back(s[i - 1]);
    }
    res1 += res2;
    swap(s, res1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s >> t;
    for (int i = 0; i < 10000; i ++){
        // cout << s << "\n";
        if (s == t){
            printf("%d\n", i);
            return 0;
        }
        operate();
    }
    printf("-1\n");

    return 0;
}