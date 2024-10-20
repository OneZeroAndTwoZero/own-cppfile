#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0},b[100005];

int main(){
	cin >> n >> m;
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			if(j % i == 0){
				a[j - 1] = !a[j - 1];
			}
		}
	}
	int s = 0;
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
