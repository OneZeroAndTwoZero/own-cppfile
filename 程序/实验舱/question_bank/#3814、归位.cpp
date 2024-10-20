#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

string s;
int curx = 0,cury = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    for(auto && i : s){
        if(i == 'U'){
            curx --;
        }else if(i == 'D'){
            curx ++;
        }else if(i == 'L'){
            cury --;
        }else if(i == 'R'){
            cury ++;
        }
    }
    cout << abs(curx) + abs(cury) << "\n";

    return 0;
}