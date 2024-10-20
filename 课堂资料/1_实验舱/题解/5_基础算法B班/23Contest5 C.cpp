/*
	Author:Frozencode
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef pair<ll,ll> pii;
const ll maxn = 200010;
const ll INF = 2147483647;
const ll mod = 998244353;
int n;
string s;
struct Node{
	string name;
	vector <pair<string,Node*>> dir;
	vector <pair<string,Node*>> file;
	Node(string p){
		name = p;
		dir.clear();
		file.clear();
	}
};
void add(Node* root, string s){ //构建目录树
	if(s == "") return; //说明当前是叶子节点

	int len = s.length();
	int pos = -1, flag = 0; // flag 1文件 0目录
	string nxt_name, nxt_string; //nxt_name 下一个目录/文件名 nxt_string 读取名字后的后续输入
	for(int i = 0; i < len; i++){
		if(s[i] == '\\'){
			pos = i;
			break;
		}
	}
	if(pos == -1){
		flag = 1;
		nxt_name = s;
		nxt_string = "";
	}
	else{
		nxt_name = s.substr(0, pos);
		if(pos + 1 == len) nxt_string = "";
		else nxt_string = s.substr(pos + 1, len - pos - 1);
	}

	//先找是否已经存在该儿子，存在则直接递归构建
	bool exist = false;
	for(int i = 0; i < (root -> dir).size(); i++){
		if((root -> dir)[i].first == nxt_name){
			exist = true;
			add((root -> dir)[i].second, nxt_string);
		}
	}
	for(int i = 0; i < (root -> file).size(); i++){
		if((root -> file)[i].first == nxt_name){
			exist = true;
			add((root -> file)[i].second, nxt_string);
		}
	}
	if(exist) return;
	//否则新建一个儿子，递归构建
	Node* son = new Node(nxt_name);
	if(flag) (root -> file).pb(mp(nxt_name, son));
	else (root -> dir).pb(mp(nxt_name, son));
	add(son, nxt_string);
	return;
}
void dfs(Node* root, int dep){
	for(int i = 0; i < dep; i++) cout << "  ";
	cout << root -> name << "\n";
	auto f = [](pair<string,Node*> a, pair<string,Node*> b) -> bool{
		return a.first < b.first;
	};
	//按照字典序排序，递归输出
	sort((root -> dir).begin(), (root -> dir).end(), f); 
	sort((root -> file).begin(), (root -> file).end(), f);
	for(auto son : (root -> dir)){
		dfs(son.second, dep + 1);
	}
	for(auto son : (root -> file)){
		dfs(son.second, dep + 1);
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	Node* root = new Node("root");
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> s;
		add(root, s);
	}
	dfs(root, 0);
	return 0;
}