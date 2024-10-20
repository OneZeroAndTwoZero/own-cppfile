#include<bits/stdc++.h>
using namespace std;

string a,b,ansa,ansb;
int reala,realb,checka,checkb;
int cnta[128],cntb[128],cnt[128];

int turn(string &s){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
        res = (res << 3) + (res << 1) + (s[i] ^ 48);
    }
    return res;
}

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    for(auto && i : a) cnta[i] ++;
    for(auto && i : b) cntb[i] ++;
    for(int i = 0;i < 128;i ++){
        cnt[i] = min(cnta[i],cntb[i]);
        // cout << i << " " << cnta[i] << " " << cntb[i] << " " << cnt[i] << ";;\n";
        cnta[i] = cntb[i] = cnt[i];
    }
    for(auto && i : a){
        if(cnta[i]){
            cnta[i] --;
            continue;
        }
        ansa.push_back(i);
    }
    for(auto && i : b){
        if(cntb[i]){
            cntb[i] --;
            continue;
        }
        ansb.push_back(i);
    }
    if(ansa == "") ansa = "0";
    if(ansb == "") ansb = "1";
    int t = gcd(turn(a),turn(b));
    reala = turn(a) / t,realb = turn(b) / t;
    t = gcd(turn(ansa),turn(ansb));
    checka = turn(ansa) / t,checkb = turn(ansb) / t;
    cout << a << "/" << b << " ";
    if(checka == reala && checkb == realb){
        cout << "=";
    }else{
        cout << "!=";
    }
    cout << " " << ansa << "/" << ansb << "\n";

    return 0;
}