#include<bits/stdc++.h>
using namespace std;

vector<int> a[100005];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < 100005;i++){
		a[i].push_back(0);
	}
	for(int i = 0;i < m;i++){
		int x,y;
		cin >> x >> y;
		x --;
		a[x].push_back(y);
		a[x][0] ++;
	}
	for(int i = 0;i < n;i++){
		for(int j = 1;j <= a[i][0];j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

