#include<bits/stdc++.h>
using namespace std;

int n,m;
queue<int> a;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		int k;
		cin >> k;
		a.push(k);
	}
	cin >> m;
	while(a.front() < m && a.size() > 0){
		cout << a.front() << " ";
		a.pop();
	}
	cout << m << " ";
	while(a.size() > 0){
		cout << a.front() << " ";
		a.pop();
	}
	
	return 0;
} 
