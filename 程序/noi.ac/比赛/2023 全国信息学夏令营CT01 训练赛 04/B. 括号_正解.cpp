#include<bits/stdc++.h>
using namespace std;

string s;
queue<char> q;
stack<int> a;
unordered_map<int,int> f;

void dfs(int l,int r,int fx){
	if(l > r) return;
	if(l == r){
		//cout << l << ";;;\n";
		cout << s[l];
		return;
	}
	if(fx){
		for(int i = l;i <= r;i ++){
			//cout << i << ";;;\n";
			if(s[i] == '('){
				//cout << endl << "[][]" << i << endl;
				dfs(i + 1,f[i] - 1,!fx);
				i = f[i];
			}else{
				cout << s[i];
			}
		}
	}else{
		for(int i = r;i >= l;i --){
			//cout << i << ";;;\n";
			if(s[i] == ')'){
				dfs(f[i] + 1,i - 1,!fx);
				i = f[i];
			}else{
				cout << s[i];
			}
		}
	}
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	cin >> s;
	for(int i = 0;i < s.size();i ++){
		if(s[i] == '('){
			a.push(i);
		}else if(s[i] == ')'){
			f[i] = a.top();
			f[a.top()] = i;
			a.pop();
		}
	}
	dfs(0,s.size() - 1,1);

	return 0;
}