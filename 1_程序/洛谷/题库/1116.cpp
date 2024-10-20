#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int p(int n){
	int ans = 0;
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(a[j] > a[j + 1]){
				ans ++;
				swap(a[j],a[j + 1]);
			}
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cout << p(n) << endl;

	return 0;
}

