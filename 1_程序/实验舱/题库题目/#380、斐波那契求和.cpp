#include<bits/stdc++.h>
using namespace std;

int t,n;
string f[4005];
string sum[4005];

string add(string a,string b){
    int ans[4005] = {0};
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> t;
    f[1] = "1",f[2] = "1";
    for(int i = 3;i <= 4000;i ++)
        f[i] = add(f[i - 1],f[i - 2]);
    for(int i = 1;i <= 4000;i ++)
        sum[i] = add(sum[i - 1],f[i]);
    while(t --){
        cin >> n;
        cout << sum[n] << "\n";
    }

	return 0;
}