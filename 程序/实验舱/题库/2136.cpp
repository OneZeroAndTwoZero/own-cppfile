#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

int main(){
	int max = -1;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			int tem;
			cin >> tem;
			a[j] += tem;
		}
	}
	for(int i = 0;i < n;i++){
		if(a[i] > max) max = a[i];
	}
	cout << max << endl;
	for(int i = 0;i < n;i++){
		if(a[i] == max){
			cout << i + 1 << " ";
		}
	}

	return 0;
}

