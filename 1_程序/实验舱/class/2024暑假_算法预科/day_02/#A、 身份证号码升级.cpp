#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
string temp,s = "";
int val[25] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char f[25] = "10x98765432\0";

string operate(string s){
    int res = 0;
    for(int i = 0;i < 17;i ++){
        res += val[i] * (s[i] - '0');
    }
    res %= 11;
    s.push_back(f[res]);
    return s;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> temp;
    for(int i = 0;i < 6;i ++) s.push_back(temp[i]);
    s.push_back('1');
    s.push_back('9');
    for(int i = 6;i < 15;i ++) s.push_back(temp[i]);
    cout << operate(s) << "\n";

    return 0;
}