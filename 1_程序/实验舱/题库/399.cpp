#include<bits/stdc++.h>
using namespace std;

vector<int> a[10005];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		a[i + 1].push_back(i + 1);
	}
	for(int i = 0;i < m;i++){
		int d1,d2;
		cin >> d2 >> d1;
		if(d1 == d2) continue;
		while(!a[d1].empty()){
			a[d2].push_back(a[d1].back());
			a[d1].pop_back();
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < a[i + 1].size();j ++){
			cout << a[i + 1][j] << " ";
		}
		if(a[i + 1].size() == 0){
			cout << "(¿ÕÐÐ)";
		}
		cout << endl;
	}

	return 0;
}

