#include<bits/stdc++.h>
using namespace std;

int t;
string s;
long long pow_[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> t;
    pow_[0] = 1;
    for(int i = 1;i <= 63;i ++){
        pow_[i] = pow_[i - 1] * 2LL;
    }
    while(t --){
        cin >> s;
        if(s[0] == 'C'){
            cout << "0\n";
        }else{
            cout << pow_[s.size()] - 1 << "\n";
        }
    }

	return 0;
}