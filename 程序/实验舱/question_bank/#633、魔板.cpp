#include<bits/stdc++.h>
using namespace std;

char ch;
string s,e;
unordered_map<string,bool> vis;
unordered_map<string,int> dis;
unordered_map<string,char> op;
unordered_map<string,string> f;

void output(string t){
    if(t == s) return;
    output(f[t]);
    cout << op[t];
}

string A(string &s){
    string res = s;
    reverse(res.begin(),res.end());
    return res;
}

string B(string &s){
    string res = s;
    for(int i = 3;i > 0;i --){
        res[i] = res[i - 1];
    }
    res[0] = s[3];
    for(int i = 4;i < 7;i ++){
        res[i] = res[i + 1];
    }
    res[7] = s[4];
    return res;
}

string C(string &s){
    string res = s;
    res[1] = s[6],res[2] = s[1],res[5] = s[2],res[6] = s[5];
    return res;
}

string use(int x,string &s){
    if(x == 0) return A(s);
    else if(x == 1) return B(s);
    else return C(s);
}

void bfs(){
    queue<string> q;
    vis[s] = 1,dis[s] = 0;
    q.push(s);
    while(q.size()){
        string t = q.front();
        if(t == e) return;
        q.pop();
        for(int i = 0;i < 3;i ++){
            string x = use(i,t);
            if(vis[x]) continue;
            vis[x] = 1,dis[x] = dis[t] + 1,f[x] = t;
            op[x] = 'A' + i;
            q.push(x);
        }
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

    s = "12345678",e = "";
    for(int i = 0;i < 8;i ++){
        cin >> ch;
        e.push_back(ch);
    }
    bfs();
    cout << dis[e] << "\n";
    output(e);

    return 0;
}