#include<bits/stdc++.h>
using namespace std;

int k;
string a,b;

int turn(char a){
    if(a >= '0' && a <= '9') return a - '0';
    else return 10 + a - 'A';
}

char ret(int x){
    if(x < 10) return x + '0';
    return x - 10 + 'A';
}

string mul(string a,string b){
    if(a == "0" || b == "0") return "0";
    int ans[10005] = {0},pos = 0;
    string res = "";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int n = a.size() + b.size() - 1;
    for(int i = 0;i < a.size();i ++)
        for(int j = 0;j < b.size();j ++)
            ans[i + j] += turn(a[i]) * turn(b[j]);
    while(pos < n - 1 || ans[pos] > k - 1){
        ans[pos + 1] += ans[pos] / k;
        ans[pos ++] %= k;
    }
    for(int i = pos;i >= 0;i --) res.push_back(ret(ans[i]));
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k >> a >> b;
    cout << mul(a,b) << "\n";

    return 0;
}