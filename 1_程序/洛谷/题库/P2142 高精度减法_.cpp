#include<bits/stdc++.h>
using namespace std;

string s1,s2;

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

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    cout << min(s1,s2) << endl;

	return 0;
}