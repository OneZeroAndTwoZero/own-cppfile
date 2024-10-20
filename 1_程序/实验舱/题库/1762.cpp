#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int ans = 0;
	int k = 0;
	for(int i = 0;i < n;i++,k ++){
		if(k > a[i]) k --;
		else ans ++;
	}
	cout << ans << endl;

	return 0;
}

