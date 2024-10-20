#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int pi[1000006];
int f[1000006];

void getpre(){
    int i = 1, j = 0;
    for (; i < n; i ++){
        while (j && s[i] != s[j]){
            j = pi[j - 1];
        }
        if (s[i] == s[j]){
            j ++;
        }
        pi[i] = j;
        // cout << i << "[][]" << pi[i] << ";;;\n";
    }
}

void putout(int x){
    for (int i = 0; i < x; i ++){
        cout << s[i];
    }
    cout << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    n = s.size();
    getpre();
    for (int i = 1; i <= n - 2; i ++){
        f[pi[i]] = 1;
    }
    int ans = pi[n - 1];
    while (ans){
        if (f[ans]){
            putout(ans);
            return 0;
        }
        // cout << ans << " " << pi[ans - 1] << ";;;;;;;\n";
        ans = pi[ans - 1];
    }
    cout << "-1\n";

    return 0;
}