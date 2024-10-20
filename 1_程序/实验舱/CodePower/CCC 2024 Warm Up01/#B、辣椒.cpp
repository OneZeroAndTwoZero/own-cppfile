#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

map<string,int> zhao;
int n,sum = 0;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    zhao["Poblano"] = 1500;
    zhao["Mirasol"] = 6000;
    zhao["Serrano"] = 15500;
    zhao["Cayenne"] = 40000;
    zhao["Thai"] = 75000;
    zhao["Habanero"] = 125000;
    cin >> n;
    while(n --){
        cin >> s;
        sum += zhao[s];
    }
    printf("%d\n",sum);

    return 0;
}

