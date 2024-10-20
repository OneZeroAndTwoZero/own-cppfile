#include<bits/stdc++.h>
using namespace std;

int n,p,check,now,m;
bool pd = 1;
char c;
map<char,int> num;
priority_queue<int,vector<int>,greater<int> > q;
string s[105];

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	cin >> n;
	for(int i = 0;i < n;i ++){
		cin >> c >> p;
		num[c] = p;
		q.push(p);
	}
	while(q.size() > 1){
		int num1 = q.top();
		q.pop();
		int num2 = q.top();
		q.pop();
		check += num1 + num2;
		q.push(num1 + num2);
	}
	cin >> m;
	while(m --){
		now = 0,pd = 1;
		for(int i = 0;i < n;i ++){
			cin >> c;
			cin >> s[i];
			now += s[i].size() * num[c];
		}
		if(now != check){
			pd = 0;
		}
		for(int i = 0;i < n;i ++){
			for(int j = 0;j < n;j ++){
				if(i == j) continue;
				if(s[i].find(s[j]) == 0){
					pd = 0;
				}
			}
		}
		if(pd){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}

	return 0;
}

