#include<bits/stdc++.h>
using namespace std;

int N,M;
int a[100005];
int ans[100005];
int b[100005];

int main(){
	cin >> N >> M;
	for(int i = 0;i < M;i++){
		cin >> a[i];
	}
	for(int i = 0;i < M;i++){
		cin >> ans[i];
	}
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
