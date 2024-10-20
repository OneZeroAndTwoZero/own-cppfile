#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n] = {0};
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			if(j % i == 0){
				a[j - 1] = !a[j - 1];
			}
		}
	}
	int s = 0,b[n];
	for(int i = 0;i < n;i++){
		if(a[i]){
			b[s] = i + 1;
			s += 1;
		}
	}
	for(int i = 0;i < s-1;i++){
		cout << b[i] << ",";
	}
	cout << b[s - 1];

	
	return 0;
} 
