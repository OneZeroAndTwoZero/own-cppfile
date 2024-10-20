#include<bits/stdc++.h>
using namespace std;

string a;
long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> a;
    sscanf(a.c_str(),"%lld",&n);
    if(a.find("62") != a.npos || n % 62 == 0){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}