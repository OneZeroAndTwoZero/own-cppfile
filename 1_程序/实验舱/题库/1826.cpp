#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

int ans(int i,int j){
	int ans = 0;
	for(int k = i;k < i + j;k++){
		ans += a[k];
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	int max_ = -1,min_ = 100000;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 1;j <= n - i;j++){
			int tem = ans(i,j);
			max_ = max(max_,tem),min_ = min(min_,tem);
		}
	}
	cout << max_ << " " << min_ << endl;

	return 0;
}

