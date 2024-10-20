#include<bits/stdc++.h>
using namespace std;

string s;
long long ans;

bool suan(int l,int r){
    int res = s[l] - '0';
    for(int i = l + 1;i <= r;i ++){
        int t = s[i] - '0';
        res = !(res & t);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        for(int j = i;j < s.size();j ++){
            ans += suan(i,j);
            // if(suan(i,j)) cout << i << " " << j << "\n";
        }
    }
    cout << ans << "\n";

	return 0;
}