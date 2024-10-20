#include<bits/stdc++.h>
using namespace std;

string s;
long long mod = 998244353,ans0 = 0,ans1 = 0;
long long dp[1005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    cin >> s;
    if(s.size() == 1){
        if(s == "1") ans1 ++;
        else ans0 ++;
        printf("%d %d\n",ans0,ans1);
        return 0;
    }else if(s.size() == 3){
        int num1 = s[0] - '0';
        int num2 = s[2] - '0';
        int t;
        if(s[1] == '&') t = num1 & num2;
        if(s[1] == '|') t = num1 | num2;
        if(s[1] == '^') t = num1 ^ num2;
        if(t != 0) ans1 ++;
        else ans0 ++;
        printf("%d %d\n",ans0,ans1);
        return 0;
    }else{
        dp[0] = dp[1] = 1;
        for(int i = 2;i <= 100;i ++){
            for(int j = 1;j < i;j ++){
                dp[i] += dp[j] * dp[i - j];
                dp[i] %= mod;
            }
            dp[i] %= mod;
        }
        if(s[1] == '|'){
            if(s.find("1") != s.npos){
                cout << 0 << " " << dp[s.size() / 2 + 1] << endl;
            }
        }
    }

	return 0;
}