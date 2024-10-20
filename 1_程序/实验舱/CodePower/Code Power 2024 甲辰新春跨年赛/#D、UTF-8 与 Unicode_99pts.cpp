#include<bits/stdc++.h>
using namespace std;

int n,cur;
string s,t,s1,s2,s3;
vector<int> ans;

int turn1(string s){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
        res = (res * 2) + (s[i] - '0');
    }
    return res;
}

void turn2(int x){
    if(x == 0) return;
    turn2(x / 16);
    if(x % 16 < 10){
        cout << (char)((x % 16) + '0');
    }else{
        cout << (char)((x % 16) - 10 + 'A');
    }
}

string get(int st,int k){
    string res = "";
    for(int i = st;i - st < k;i ++){
        res = res + s[i];
    }
    return res;
}

void en(){
    printf("Error\n");
    exit(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n > 0){
        n --;
        cin >> s;
        if(s.find("10") == 0) continue;
        t = "";
        if(s[0] == '0'){
            t = get(1,7);
        }else if(s[2] == '0'){
            n --;
            if(n < 0){
                en();
            }
            cin >> s1;
            if(s1.find("10") != 0){
                en();
            }
            s += s1;
            t = get(3,5) + get(10,6);
        }else if(s[3] == '0'){
            n -= 2;
            if(n < 0){
                en();
            }
            cin >> s1 >> s2;
            if(s1.find("10") != 0 || s2.find("10") != 0){
                en();
            }
            s += s1 + s2;
            t = get(4,4) + get(10,6) + get(18,6);
        }else if(s[4] == '0'){
            n -= 3;
            if(n < 0){
                en();
            }
            cin >> s1 >> s2 >> s3;
            if(s1.find("10") != 0 || s2.find("10") != 0 || s3.find("10") != 0){
                en();
            }
            s += s1 + s2 + s3;
            t = get(5,3) + get(10,6) + get(18,6) + get(26,6);
        }else{
            en();
        }
        // cout << t << ";;\n";
        cur = turn1(t);
        // cout << cur << "[]\n";
        ans.push_back(cur);
    }
    for(int i = 0;i < ans.size();i ++){
        if(ans[i] == 0) cout << "0";
        else turn2(ans[i]);
        cout << "\n";
    }

    return 0;
}