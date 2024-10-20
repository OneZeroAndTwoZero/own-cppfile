#include<bits/stdc++.h>
using namespace std;

int p;

string turn(int x){
    string res = "",tem = "";
    while(x){
        tem = "";
        if(x % p < 10)
            tem.push_back('0' + x % p);
        else
            tem.push_back('A' + x % p - 10);
        res = tem + res;
        x /= p;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> p;
    for(int i = 1;i < p;i ++)
        for(int j = 1;j <= i;j ++)
            cout << turn(i) << "*" << turn(j) << "=" 
                << turn(i * j) << " \n"[j == i];

	return 0;
}