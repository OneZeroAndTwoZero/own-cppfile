#include<bits/stdc++.h>
using namespace std;

vector<int> a[15];
int m,u,v,f;
unordered_map<string,int> zhao;
unordered_map<string,int> st;
queue<string> q;
string check = "123456780";

int bfs(string s){
	q.push(s);
	while(q.size()){
		string t = q.front();
		q.pop();
		zhao[t] = 1;
		if(t == check) return st[t];
		int pos = t.find("0");
		for(auto && i : a[pos]){
			string in = t;
			swap(in[pos],in[i]);
			if(zhao[in] == 0){
				q.push(in);
				zhao[in] = 1;
				st[in] = st[t] + 1;
			}
		}
	}
	return -1;
}

int main(){
	scanf("%d",&m);
	while(m --){
		scanf("%d %d",&u,&v);
		u--,v--;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	string s = "000000000";
	for(int i = 0;i < 8;i++){
		scanf("%d",&f);
		s[-- f] = i + 1 + '0';
	}
	printf("%d\n",bfs(s));

	return 0;
}

