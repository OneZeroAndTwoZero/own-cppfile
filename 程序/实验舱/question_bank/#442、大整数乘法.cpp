#include<bits/stdc++.h>
using namespace std;

string s1,s2;
long long ans[2005];

void mul(string s1,string s2){
    if(s1 == "0" || s2 == "0"){
        cout << "0" << endl;
        return;
    }
    int f = 1;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    if(s1[s1.size() - 1] == '-')
        f *= -1,s1.pop_back();
    if(s2[s2.size() - 1] == '-')
        f *= -1,s2.pop_back();
    for(int i = 0;i < s1.size();i ++){
        for(int j = 0;j < s2.size();j ++){
            ans[i + j] += (s1[i] - '0') * (s2[j] - '0');
        }
    }
    for(int i = 0;i < 2000;i++){
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
    }
    if(f == -1) cout << "-";
    bool ok = 1;
    for(int i = 2000;i >= 0;i --){
        if(ans[i] == 0 && ok) continue;
        ok = 0;
        cout << ans[i];
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

    cin >> s1 >> s2;
    mul(s1,s2);
    cout << "\n";

    return 0;
}
