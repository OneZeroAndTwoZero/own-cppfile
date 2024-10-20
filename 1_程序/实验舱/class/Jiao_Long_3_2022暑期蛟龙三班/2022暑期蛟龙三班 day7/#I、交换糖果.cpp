#include<bits/stdc++.h>
using namespace std;

vector<int> a[10002];

int main(){
	int n,m,r,c;
	cin >> n >> m >> r;
	for(int i = 1;i <= m;i++){
		cin >> c;
		a[c].push_back(i);
	}
	int x,y;
	for(int i = 0;i < r;i++){
		cin >> x >> y;
		swap(a[x],a[y]);
	}
	for(int i = 1;i <= n;i++){
		if(a[i].size() == 0){
		    continue;
		}
		cout << a[i].size() << " ";
		sort(a[i].begin(),a[i].end());
		for(int j = 1;j <= a[i].size();j++){
			cout << a[i][j - 1] << " ";
		}
		cout << endl;
	}

	return 0;
}

