#include<bits/stdc++.h>
using namespace std;

int n;
string ans = "0";

string turn(int x){
    string res;
    while(x){
        res.push_back(x % 10 + '0');
        x /= 10;
    }
    reverse(res.begin(),res.end());
    return res;
}

string add(string a,string b){
    int ans[100005] = {0};
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size() < b.size()) swap(a,b);
    while(a.size() > b.size()) b.push_back('0');
    int l = a.size();
    for(int i = 0;i < l;i ++)
        ans[i] = (a[i] - '0') + (b[i] - '0');
    int pos = 0;
    while(ans[pos] > 9 || pos < l - 1){
        ans[pos + 1] += ans[pos] / 10;
        ans[pos ++] %= 10;
    }
    string res = "";
    for(int i = pos;i >= 0;i --)
        res.push_back(ans[i] + '0');
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

string fac(int x){
    if(x == 0){
        return "1";
    }
    return cheng(turn(x),fac(x - 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 1;i <= n;i ++){
        ans = add(ans,fac(i));
    }
    cout << ans << "\n";

	return 0;
}