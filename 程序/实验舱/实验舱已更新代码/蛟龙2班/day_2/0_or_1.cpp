#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int a[M];
	int ans[M];
	for(int i = 0;i < M;i++){
		cin >> a[i];
	}
	for(int i = 0;i < M;i++){
		cin >> ans[i];
	}
	int b[M];
	for(int i = 1;i <= N;i++){
		int s = 0;
		for(int i = 0;i < M;i++){
			cin >> b[i];
			if(b[i] == ans[i]){
				s += a[i];
			}
		}
		cout << s << endl;
	}
	
	return 0;
} 
