#include<bits/stdc++.h>
using namespace std;

struct node{
	string val;
	int typ; // 1:box 2:file
	unordered_map<string, int> f;
};

struct vec{
	string s;
	int typ, p;
	bool operator < (const vec &a) const{
		if (typ != a.typ) return typ < a.typ;
		return s < a.s;
	}
};

int N, P = 1;
string s;
node tree[1000006];
vector<vec> son[1000006];

void operate(int p, int st){
	if (st == (int)s.size()){
		tree[p].typ = 1;
		return;
	}else if (st == (int)s.size() + 1){
		return;
	}
	tree[p].typ = 1;
	int pos = (int)s.size();
	if (s.find("\\", st) != s.npos){
		pos = s.find("\\", st);
	}
	string tmp = s.substr(st, pos - st);
	if (!tree[p].f[tmp]){
		tree[p].f[tmp] = ++ P;
		tree[P].val = tmp;
	}
	operate(tree[p].f[tmp], pos + 1);
}

void putout(int p, int k){
	for (int i = 0; i < k; i ++) cout << " ";
	cout << tree[p].val << "\n";
	for (auto && i : son[p]){
		putout(i.p, k + 2);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> N;
	tree[1].val = "root";
	for (int i = 1; i <= 1000000; i ++){
		tree[i].typ = 2;
	}
	while (N --){
		cin >> s;
		operate(1, 0);
	}
	for (int i = 1; i <= 1000000; i ++){
		for (auto && x : tree[i].f){
			vec tmp;
			tmp.s = x.first, tmp.typ = tree[x.second].typ, tmp.p = x.second;
			son[i].push_back(tmp);
		}
		sort(son[i].begin(), son[i].end());
	}
	putout(1, 0);

	return 0;
}
