#include<bits/stdc++.h>
using namespace std;

string s1,s2;

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

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    cout << add(s1,s2) << endl;

	return 0;
}