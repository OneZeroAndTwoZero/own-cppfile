#include<bits/stdc++.h>
using namespace std;

string s;

void operate(){
    int pos = 0;
    while(s[pos] == '0'){
        pos ++;
    }
    swap(s[0],s[pos]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    if(s == "0"){
        cout << "0 0\n";
    }else{
        sort(s.begin(),s.end(),greater<int>());
        cout << s << " ";
        sort(s.begin(),s.end());
        operate();
        cout << s << "\n";
    }

    return 0;
}