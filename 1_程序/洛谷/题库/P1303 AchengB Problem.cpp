#include<bits/stdc++.h>
using namespace std;

string s1,s2;

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
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    cout << cheng(s1,s2) << endl;

	return 0;
}
