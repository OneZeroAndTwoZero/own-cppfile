#include<bits/stdc++.h>
using namespace std;

string a,b,ans = "1";

string add(string a,string b){
    int ans[10005] = {0};
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

string mul(string a,string b){
    int ans[10005] = {0};
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
    int ans[10005] = {0},pos = 0;
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

string chu(string a,int b){
    string res = "";
    long long yu = 0,f = 0;
    for(int i = 0;i < a.size();i ++){
        yu = yu * 10 + (a[i] - '0');
        if(f || yu / b != 0 || i == a.size() - 1){
            f = 1;
            res.push_back((yu / b) + '0');
            yu %= b;
        }
    }
    return res;
}

string operate(string a,string b){
    if(a == "0") return "0";
    if(b == "1") return a;
    if((a[a.size() - 1] & 1) && (b[b.size() - 1] & 1)){
        return add(operate(mul(a,b),b),"1");
    }else if((a[a.size() - 1] & 1) && !(b[b.size() - 1] & 1)){
        return operate(mul(a,"1"),b);
    }else if(!(a[a.size() - 1] & 1) && (b[b.size() - 1] & 1)){
        return cheng("2",operate(chu(a,2),b));
    }else{
        return operate(chu(a,2),chu(b,2));
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    ans = operate(a,b);
    cout << ans << "\n";
    if(cheng(ans,b) != a){
        cout << mul(a,cheng(ans,b)) << "\n";
    }

    return 0;
}