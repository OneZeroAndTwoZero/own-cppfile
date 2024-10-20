#include<bits/stdc++.h>
using namespace std;

struct node{
    string idx;
    int zhi;
    int l = -1,r = -1;
    bool r = 0;
};

struct node2{
    int id;
    int num1;
};

stack<string> zhan;
stack<node2> zhan2;
string s;
int n,pos;
int w[100005] = {0};
bool dis[100005] = {0};
map<string,int> zhao;
node tree[100005];

void turn(string a){
    int res = 0;
    for(int i = 1;i < a.size();i ++){
        res = res * 10 + a[i] - '0';
    }
    return res;
}

void cz(string a){
    if(a == "!"){
        node2 t = zhan2.top();
        zhan2.pop();
        zhan2.push({!t.num1});
    }else if(a == "|"){
        node2 num2 = zhan2.top();
        zhan2.pop();
        node2 num1 = zhan2.top();
        zhan2.pop();
        tree[pos].l = num1,tree[pos].r = num2;
        tree[pos].idx = "|";
        tree[pos].zhi = (num1 | num2);
        zhan2.push(num1 | num2);
    }else if(a == '&'){
        int num2 = zhan2.top();
        zhan2.pop();
        int num1 = zhan2.top();
        zhan2.pop();
        zhan2.push(num1 & num2);
    }else{
        tree[turn(a)].zhi = w[turn(a)];
        zhan2.push(w[turn(a)]);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    getline(cin,s);
    s = s + " ";
    cin >> n;
    pos = n + 1;
    for(int i = 0;i < n;i ++){
        cin >> w[i + 1];
    }
    string t = "";
    for(int i = 0;i <= s.size();i ++){
        if(s[i] != ' '){
            t.push_back(s[i]);
        }else{
            cz(t);
            t = "";
        }
    }

	return 0;
}
