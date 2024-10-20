#include<bits/stdc++.h>
using namespace std;

string s;
string last;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    while(cin >> s){
        if(s == "99999"){
            return 0;
        }
        if((s[0] - '0' + s[1] - '0') & 1){
            last = "left";
        }else if(s[0] != '0' || s[1] != '0'){
            last = "right";
        }
        cout << last << " " << s[2] << s[3] << s[4] << endl;
    }

	return 0;
}
