#include<bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;
string s;

int main(){
    freopen("ball.in","r",stdin);
    freopen("ball.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    reverse(s.begin(),s.end());
    for(int i = 0;i < n;i ++){
        ans = (ans << 1) + (s[i] == 'R');
    }
    printf("%lld\n",(1LL << n) - ans - 1);

    return 0;
}