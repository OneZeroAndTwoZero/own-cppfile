#include<bits/stdc++.h>
using namespace std;

string c;
int num = 0;

int div(string s,int a){
    int res = 0;
    for(int i = 0;i < s.size();i ++)
        res = (res * 10 + (s[i] - '0')) % a;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> c;
    for(int i = 2;i <= 9;i ++)
        if(div(c,i) == 0){
            cout << i << " ";
            num ++;
        }
    if(!num) cout << "none\n";

	return 0;
}