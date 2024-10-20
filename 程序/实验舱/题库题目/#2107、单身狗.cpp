#include<bits/stdc++.h>
using namespace std;

int n,m,num,pos = 0;
string s1,s2,a[100005];
unordered_map<string,string> f;
unordered_map<string,int> come;
priority_queue<string,vector<string>,greater<string> > q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
    while(n --){
        cin >> s1 >> s2;
        f[s1] = s2;
        f[s2] = s1;
    }
    cin >> m;
    while(m --){
        cin >> a[pos];
        come[a[pos ++]] = 1;
    }
    for(int i = 0;i < pos;i ++){
        if(f[a[i]] == "" || come[f[a[i]]] == 0){
            q.push(a[i]);
        }
    }
    num = q.size();
    cout << num << "\n";
    for(int i = 0;i < num;i ++){
        cout << q.top() << " \n"[i == n - 1];
        q.pop();
    }

	return 0;
}