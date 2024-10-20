#include<bits/stdc++.h>
using namespace std;

string a,b;

bool big(){
    if(a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

void min(string b){
    int ans[3005] = {0};
    string res = "";
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
        if(f0 || ans[i] != 0 || i == 0)
            f0 = 1,res.push_back(ans[i] + '0');
    }
    a = res;
}

string operate(){
    if(!big()) swap(a,b);
    if(b == "0") return a;
    min(b);
    return operate();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> a >> b;
    cout << operate() << "\n";

	return 0;
}