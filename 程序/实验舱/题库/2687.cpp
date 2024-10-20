#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	long long sum = 0,nee = 90 * n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a + n);
	long long cha = nee - sum;
	if(cha <= 0){
		cout << 0 << endl;
		return 0;
	}
	int ans = 0;
	for(int i = 0;cha > 0;i++){
		cha -= (100 - a[i]);
		ans ++;
	}
	cout << ans << endl;

	return 0;
}

