#include<bits/stdc++.h>
using namespace std;

int n;
string ans = "1";

string min(string a,string b){
    int ans[100005] = {0};
    string res = "";
    if(a.size() < b.size() || a.size() == b.size() && a < b){
        swap(a,b);
        res.push_back('-');
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while(a.size() < b.size()) a.push_back('0');
    while(a.size() > b.size()) b.push_back('0');
    int l = a.size(),f0 = 0;
    for(int i = 0;i < l;i ++){
        ans[i] += (a[i] - '0') - (b[i] - '0');
        while(ans[i] < 0) ans[i + 1] -= 1,ans[i] += 10;
    }
    for(int i = l;i >= 0;i --){
        if(f0 || ans[i] != 0 || i == 0){
            f0 = 1;
            res.push_back(ans[i] + '0');
        }
    }
    return res;
}

string cheng(string a,string b){
    if(a == "0" || b == "0") return "0";
    int ans[100005] = {0},pos = 0;
    string res = "";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int k = a.size() + b.size() - 1;
    for(int i = 0;i < a.size();i ++)
        for(int j = 0;j < b.size();j ++)
            ans[i + j] += (a[i] - '0') * (b[j] - '0');
    while(pos < k - 1 || ans[pos] > 9){
        ans[pos + 1] += ans[pos] / 10;
        ans[pos ++] %= 10;
    }
    for(int i = pos;i >= 0;i --) res.push_back(ans[i] + '0');
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 0;i <= n;i ++)
        ans = cheng(ans,"2");
    ans = min(ans,"2");
    cout << ans << endl;

	return 0;
}