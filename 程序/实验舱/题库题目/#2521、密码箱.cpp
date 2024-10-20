#include<bits/stdc++.h>
using namespace std;

int n;
string a[1005];
string s,ht1,ht2,ht3,ht4;

bool ok(int x){
    if(x == s.size()) return 1;
    bool res = 0;
    if(s.find(ht1,x) == x) res |= ok(x + ht1.size());
    else if(s.find(ht2,x) == x) res |= ok(x + ht2.size());
    else if(s.find(ht3,x) == x) res |= ok(x + ht3.size());
    else if(s.find(ht4,x) == x) res |= ok(x + ht4.size());
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 0;i < n;i ++) cin >> a[i];
    cin >> ht1 >> ht2;
    ht3 = ht1,ht4 = ht2;
    reverse(ht3.begin(),ht3.end());
    reverse(ht4.begin(),ht4.end());
    for(int i = 0;i < n;i ++){
        s = a[i];
        if(ok(0)){
            cout << s << endl;
            return 0;
        }
    }

	return 0;
}