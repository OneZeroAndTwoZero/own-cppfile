#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,maxn = 0,maxi;
int a[100005] = {0};

int main(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> x >> y;
		a[y] = x;
	}
	for(int i = 1;i <= n;i++){
		if(a[i] == 0) cout << i << endl;
	}
	for(int i = 1;i <= n;i++){
		int t = 0;
		for(int j = 1;j <= n;j++){
			if(a[j] == i) t ++;
		}
		if(t > maxn){
			maxn = t;
			maxi = i;
		}
	}
	cout << maxi << endl;
	for(int i = 1;i <= n;i++){
		if(a[i] == maxi){
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}

