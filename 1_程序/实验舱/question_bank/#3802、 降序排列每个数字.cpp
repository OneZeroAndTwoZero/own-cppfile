#include<bits/stdc++.h>
using namespace std;

string s;
vector<string> a;

void putout(){
    cout << "[";
    int len = a.size();
    for(int i = 0;i < len;i ++){
        if(i) cout << ", ";
        cout << a[i];
    }
    cout << "]";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(cin >> s){
        sort(s.begin(),s.end(),greater<char>());
        a.push_back(s);
    }
    putout();

    return 0;
}
