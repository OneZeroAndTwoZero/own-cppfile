#include<bits/stdc++.h>
using namespace std;

struct node{
	int ci;
	string si;
};

unordered_map<node,vector<node> > a;
int n;
string s,tem,r;

void dfs(int u,string v,int num){
	int t = a[{u,v}].size();
	for(int i = 0;i < num;i++){
		cout << " ";
	}
	cout << v << endl;
	for(int i = 0;i < t;i++){
		dfs(a[{u,v}][i].ci,a[{u,v}][i].si,num + 2);
	}
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		r = "root";
		int k = 1;
		for(int i = 0;i < s.size();i++){
			if(s[i] == '\\'){
				a[{k - 1,r}].push_back({k,tem});
				r = tem;
				tem = "";
				k ++;
			}else{
				tem = tem + s[i];
			}
		}
	}
	cout << "root\n";
	dfs(0,"root",2);

	return 0;
}

