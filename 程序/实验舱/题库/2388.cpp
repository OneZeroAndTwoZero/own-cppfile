#include<bits/stdc++.h>
using namespace std;

int nums[1005] = {0};
int ans[1005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> nums[i];
	}
	for(int i = 0;i < n;i++){
		ans[i] = nums[nums[i]];
		cout << ans[i] << " ";
	}

	return 0;
}

