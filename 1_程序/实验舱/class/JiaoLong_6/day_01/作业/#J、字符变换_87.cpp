#include<bits/stdc++.h>
using namespace std;


struct node{
    string si;
    int st,type;
};

struct rule{
    string s1,s2;
};

int n,ans;
string a,b,t1,t2;
rule f[105];
unordered_map<string,int> fin[2],cnt[2];

string operate(string s,string s1,string s2){
    int pos = s.find(s1);
    string add = s.substr(0,pos) + s2 + 
    s.substr(pos + s1.size(),s.size() - pos - s1.size());

    return add;
}

void bfs(){
    queue<node> q1,q2;
    q1.push({a,0,0});
    q2.push({b,0,1});
    fin[0][a] = fin[1][b] = 1;
    while(q1.size() && q2.size()){
        node t;
        if(q1.size() < q2.size()){
            t = q1.front();
            q1.pop();
        }else{
            t = q2.front();
            q2.pop();
        }
        // cout << t.si << "\n";
        if(fin[!t.type][t.si]){
            ans = t.st + cnt[!t.type][t.si];
            // cout << t.si << " " << t.st << "[][]\n";
            return;
        }
        for(int i = 0;i < n;i ++){
            string s = t.si;
            string s1 = f[i].s1;
            string s2 = f[i].s2;
            if(t.type == 1) swap(s1,s2);
            // cout << s << " " << s1 << " " << s2 << "\n";
            if(s.find(s1) == s.npos) continue;
            // cout << s << " " << s1 << " " << s2 << ";;;\n";
            string add = operate(s,s1,s2);
            if(fin[t.type][add]) continue;
            fin[t.type][add] = 1;
            if(t.type) q2.push({add,t.st + 1,t.type});
            else q1.push({add,t.st + 1,t.type});
            cnt[t.type][add] = t.st + 1;
            fin[t.type][add] = 1;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> a >> b;
    while(cin >> t1 >> t2){
        f[n] = {t1,t2};
        n ++;
    }
    bfs();
    if(ans != 0 || a == b) cout << ans << "\n";
    else cout << "NO ANSWER!\n";

	return 0;
}