#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
string s;
map<string,int> zhao;

int main(){
    zhao["Poblano"] = 1500;
    zhao["Mirasol"] = 6000;
    zhao["Serrano"] = 15500;
    zhao["Cayenne"] = 40000;
    zhao["Thai"] = 75000;
    zhao["Habanero"] = 125000;
    cin >> n;
    while(n --){
        cin >> s;
        ans += zhao[s];
    }
    cout << ans << endl;

    return 0;
}

