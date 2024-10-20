#include<bits/stdc++.h>
using namespace std;

string a;
int b;

string chu(string a,int b){
    string res = "";
    long long yu = 0,f = 0;
    for(int i = 0;i < a.size();i ++){
        yu = yu * 10 + (a[i] - '0');
        if(f || yu / b != 0 || i == a.size() - 1){
            f = 1;
            res.push_back((yu / b) + '0');
            yu %= b;
        }
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> a >> b;
    cout << chu(a,b) << endl;

	return 0;
}