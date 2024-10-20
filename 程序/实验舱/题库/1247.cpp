#include<bits/stdc++.h>
using namespace std;

map<int,bool> zhao;
int a[100005] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < m;i ++){
		int t;
		cin >> t;
		zhao[t] = 1;
	}
	for(int i = 0;i < n;i++){
		if(zhao[a[i]]){
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return 0;
}

