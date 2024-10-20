#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;

int to10(){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
        int t = 0;
        if(s[i] <= '9') t = s[i] - '0';
        else t = s[i] - 'A' + 10;
        res = res * n + t;
    }
    return res;
}

string tom(int a){
    string res = "";
    while(a){
        string t = " ";
        int s = a % m;
        if(s < 10) t[0] = s + '0';
        else t[0] = s + 'A' - 10;
        res = t + res;
        a /= m;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n >> s >> m;
    cout << tom(to10()) << endl;

	return 0;
}
