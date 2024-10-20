#include<bits/stdc++.h>
using namespace std;

map<int,int> zhao;
int a[10005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			zhao[a[i] + a[j]] = 1;
		}
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(zhao[a[i]] != 0){
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

