#include<bits/stdc++.h>
using namespace std;

string day,month,year;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> day >> month >> year;
    cout << month << "/" << day << "/" << year << "\n";

    return 0;
}
