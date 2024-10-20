#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],pos = 0;
stack<int> s;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		s.push(i);
		while(s.size() && s.top() == a[pos]){
			s.pop();
			pos ++;
		}
	}
	if(s.size()){
		cout << "NO\n";
	}else{
		cout << "YES\n";
	}

	return 0;
}

