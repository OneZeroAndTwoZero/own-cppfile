#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	long long n,b;
	cin >> n >> b;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n,cmp);
	long long now = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		now += a[i];
		ans ++;
		if(now >= b) break;
	}
	cout << ans << endl;

	return 0;
}

