#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
vector<int> a[100005];

int main(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		a[x].push_back(y);
	}
	for(int i = 1;i <= n;i++){
		for(auto k : a[i]){
			cout << k << " ";
		}
		cout << endl;
	}

	return 0;
}

