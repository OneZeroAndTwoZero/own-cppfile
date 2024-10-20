#include<bits/stdc++.h>
using namespace std;

int n,m,s,num;
string t;
queue<char> a[105];
stack<char> b;
vector<char> ans;

int main(){
	scanf("%d %d %d",&n,&m,&s);
	for(int i = 1;i <= n;i++){
		cin >> t;
		for(int j = 0;j < t.size();j++){
			a[i].push(t[j]);
		}
	}
	while(scanf("%d",&num)){
		if(num == -1) break;
		if(!num){
			if(b.size()){
				ans.push_back(b.top());
				b.pop();
			}
		}else{
			if(a[num].size()){
				if(b.size() < s){
					b.push(a[num].front());
				}else{
					ans.push_back(b.top());
					b.pop();
					b.push(a[num].front());
				}
				a[num].pop();
			}
		}
	}
	for(int i = 0;i < ans.size();i++){
		printf("%c",ans[i]);
	}
	puts("");

	return 0;
}
