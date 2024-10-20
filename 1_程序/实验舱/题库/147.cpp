#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
map<int,int> zhao; 

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		zhao[a[i]] = 1;
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(zhao[a[i] * 2]){
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

