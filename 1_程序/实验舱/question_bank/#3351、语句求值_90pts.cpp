#include<bits/stdc++.h>
using namespace std;

string s;
map<char,long long> f,big;

void putout(){
    map<char,long long> :: iterator it;
    for(it = f.begin();it != f.end();it ++){
        if(it->second == 0) continue;
        printf("%c=",it->first);
        if(it->second >= 1000000000LL || big[it->first]){
            printf("...%09lld\n",it->second % 1000000000LL);
        }else{
            printf("%d\n",it->second);
        }
    }
}

long long getnum(char ch){
    if(ch >= '0' && ch <= '9'){
        return ch - 48;
    }else{
        if(f[ch] >= 1000000000LL){
            big[ch] = 1;
            f[ch] %= 1000000000LL;
        }
        return f[ch];
    }
}

void operate(int pos){
    if(s.find("for",pos) == pos){
        // cout << s.find(")",pos) << "[p][]\n";
        int nxt = s.find(")",pos) + 1;
        char t = s[pos + 4];
        long long be = getnum(s[pos + 6]);
        long long en = getnum(s[pos + 8]);
        for(long long i = be;i <= en;i ++){
            f[t] = i;
            operate(nxt);
        }
        return;
    }
    char t1 = s[pos];
    if(s[pos + 1] == '='){
        char t2 = s[pos + 2];
        f[t1] = getnum(t2);
    }else{
        char t2 = s[pos + 3];
        f[t1] += getnum(t2);
    }
    if(f[t1] >= 1000000000LL){
        big[t1] = 1;
        f[t1] %= 1000000000LL;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin >> s){
        operate(0);
    }
    putout();

    return 0;
}