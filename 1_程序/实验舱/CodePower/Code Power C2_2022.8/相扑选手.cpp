#include<bits/stdc++.h>
using namespace std;

int pai(int a[],int n){
	for(int i = 1;i < n;i++){
		for(int j = 0;j < n - i;j++){
			if(a[j] < a[j + 1]){
				swap(a[j],a[j + 1]);
			}
		}
	}
	return a[0];
}

int main(){
	int n,m;
	cin >> n >> m;
	int g[n];
	for(int i = 0;i < n;i++){
		int p[m] = {0};
		for(int j = 0;j < m;j++){
			cin >> p[j];
		}
		g[i] = pai(p,m);
		cout << g[i] << " ";
	}
	cout << "\n";
	int gj = pai(g,n);
	cout << gj << endl;

	return 0;
}

