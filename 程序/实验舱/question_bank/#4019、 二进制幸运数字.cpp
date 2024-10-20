#include<bits/stdc++.h>
using namespace std;

int a, b, ans = 0;

bool check(int x){
    string s = "X";
    while (x){
        s.push_back('0' + x % 2);
        x >>= 1;
    }
    s.push_back('X');
    for (int i = 1; i < s.size() - 1; i ++){
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
            return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i ++){
        ans += check(i);
    }
    printf("%d\n", ans);

    return 0;
}