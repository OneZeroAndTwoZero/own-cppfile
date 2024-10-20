#include<bits/stdc++.h>
using namespace std;

int n,k;
string s;

long long turn(int l,int r){
    long long res = 0;
    for(int i = l;i < r;i ++){
        res = res * 10 + (s[i] - '0');
    }
    return res;
}

bool su(int l,int r){
    long long a = turn(l,r);
    if(a < 2) return 0;
    for(int i = 2;i <= a / i;i ++){
        if(a % i == 0) return 0;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n >> k;
    cin >> s;
    for(int i = 0;i + k <= n;i ++){
        if(su(i,i + k)){
            for(int j = i;j < i + k;j ++){
                cout << s[j];
            }
            cout << endl;
            return 0;
        }
    }
    cout << 404 << endl;

	return 0;
}
