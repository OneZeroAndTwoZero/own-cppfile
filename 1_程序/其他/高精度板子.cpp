#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

string Add(string &a,string &b){
    int ans[max(a.size(),b.size()) + 1005] = {0};
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

string Min(string &a,string &b){
    int ans[max(a.size(),b.size()) + 1005] = {0};
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

string Mul(string &a,string &b){
    if(a == "0" || b == "0") return "0";
    int ans[max(a.size(),b.size()) + 1005] = {0},pos = 0;
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

string Div(string &a,int b){
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}