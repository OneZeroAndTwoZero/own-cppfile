#include<bits/stdc++.h>
using namespace std;

string s,t;
int ans = 0;

void operate(){
    for(int i = 0;i < s.size();i ++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] == 'z'){
                s[i] = 'a';
            }else{
                ++ s[i];
            }
        }else{
            if(s[i] == '9'){
                s[i] = '0';
            }else{
                ++ s[i];
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s >> t;
    while(s != t){
        ans ++;
        operate();
        if(ans > 265){
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }
    cout << ans << "\n";

	return 0;
}