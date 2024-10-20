#include<bits/stdc++.h>
using namespace std;

struct node{
	int ci;
	char chi;
	int data,l,r;
	bool operator >(const node &a) const{
		return ci > a.ci;
	}
};

int n,m,t,check = 0,max_,pos = 500,st;
char ch;
node tree[10005];
priority_queue<node,vector<node>,greater<node> > q;

void cz(int u,int c){
	if(tree[u].l == -1 && tree[u].r == -1){
		check += c * tree[u].ci;
		return;
	}
	if(tree[u].l != -1) cz(tree[u].l,c + 1);
	if(tree[u].r != -1) cz(tree[u].r,c + 1);
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> ch >> t;
		tree[ch].data = ch,tree[ch].l = -1,tree[ch].r = -1,tree[ch].ci = t,tree[ch].chi = ch;
		q.push(tree[ch]);
	}
	while(q.size() > 1){
		node t1 = q.top();
		q.pop();
		node t2 = q.top();
		q.pop();
		tree[pos].data = pos;
		tree[pos].l = t1.data,tree[pos].r = t2.data;
		tree[pos].ci = t1.ci + t2.ci;
		tree[pos].chi = '0';
		q.push(tree[pos ++]);
	}
	node sheng = q.top();
	st = sheng.data;
	check = 0;
	cz(st,0);
	cin >> m;
	while(m --){
		bool ok = 1;
		int l = 0;
		map<string,int> zhao;
		map<string,int> zhao2;
		string s,tem = "";
		for(int i = 0;i < n;i++){
			cin >> ch >> s;
			l += tree[ch].ci * s.size();
			if(zhao[s] == 1) ok = 0;
			for(int j = 0;j < s.size();j++){
				tem = tem + s[j];
				zhao[tem] = 1;
				if(zhao2[tem] == 1) ok = 0;
			}
			zhao2[s] = 1;
		}
		if(check != l) ok = 0;
		if(ok == 1){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}
