#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s;
    if(s.size() % 2 == 0) s = s + "#";
    for(int i = 1;i < s.size();i += 2){
        if(s[i] == '#' && s[i + 1] == '#' || s[i] != '#' && s[i + 1] != '#'){
            continue;
        }
        puts("No");
        return 0;
    }
    puts("Yes");

	return 0;
}
